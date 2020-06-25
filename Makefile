# Linux	   =  Linux
# MacOS    =  Darwin
# Windows  =  NT

OS = $(shell uname -s)


ifeq ($(OS), Darwin)
		OS_FORMAT = -f macho64
		SRCS_PATH = srcs/mac_os
else
		OS_FORMAT = -f elf64
		SRCS_PATH = srcs/linux
endif

EXEC        = a.out

NAME        =  libasm.a

SRCS_FILES  =  ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \

SRCS        =  $(addprefix $(SRCS_PATH)/, $(SRCS_FILES))

OBJS        =  $(SRCS:.s=.o)

NASM        =  nasm




%.o: %.s
			$(NASM) $(OS_FORMAT) -o $@ -s $^

all:		$(NAME)


$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)


$(EXEC):	$(NAME)
			gcc libasm.a -include ./includes/*.h main.c tests/*.c

test:		$(EXEC)


run:		$(EXEC)
			./$(EXEC)

clean: 
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
			rm -f a.out

re:		fclean all

.PHONY:	all clean fclean re test run
