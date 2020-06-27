# Linux	   =  Linux
# MacOS    =  Darwin
# Windows  =  NT

OS = $(shell uname -s)


ifeq ($(OS), Darwin)
		OS_FORMAT = -f macho64
		SRCS_PATH = srcs/mac_os
		CC = gcc 
else
		OS_FORMAT = -f elf64
		SRCS_PATH = srcs/linux
		CC = gcc -no-pie
endif

EXEC        = a.out

NAME        =  libasm.a

SRCS_FILES  =  ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_strdup.s \
		ft_read.s \
		ft_write.s \

SRCS        =  $(addprefix $(SRCS_PATH)/, $(SRCS_FILES))

OBJS        =  $(SRCS:.s=.o)

NASM        =  nasm




%.o: %.s
			$(NASM) $(OS_FORMAT) -o $@ -s $^

all:		$(NAME)


$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)


test:		$(NAME)
			$(CC) -Wall -Werror -Wextra -include ./includes/libasm.h main.c tests/*.c libasm.a
			touch tests/txt_files/write.txt
			touch tests/txt_files/ft_write.txt



run:		test
			./$(EXEC)

clean: 
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
			rm -f $(EXEC)
			rm -f tests/txt_files/write.txt
			rm -f tests/txt_files/ft_write.txt

re:		fclean all

.PHONY:	all clean fclean re test run
