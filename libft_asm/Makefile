NAME = libft


SRC =	ft_puts.s \
	ft_bzero.s \
	ft_cat.s \
	ft_isalnum.s \
	ft_isalpha.s \
	ft_isascii.s \
	ft_isdigit.s \
	ft_isprint.s \
	ft_memcpy.s \
	ft_memset.s \
	ft_strcat.s \
	ft_strdup.s \
	ft_strlen.s \
	ft_tolower.s \
	ft_toupper.s

SRCO =	${SRC:.s=.o}

${NAME}:  
	 nasm -o ${SRCO} ${SRC}
	 nasm -o libft.o ${SRCO}
	 ld -o libft ${SRCO}

all: ${NAME}

clean : 
	rm -fv ${SRCO}

fclean: clean
	rm -fv ${NAME}

re : clean fclean all
