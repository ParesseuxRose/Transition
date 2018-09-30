SRC = ft_toupper.c \
      ft_tolower.c \
      ft_strtrim.c \
      ft_strsub.c \
      ft_strstr.c \
      ft_strsplit.c \
      ft_strrchr.c \
      ft_strnstr.c \
      ft_strnew.c \
      ft_strnequ.c \
      ft_strncpy.c \
      ft_strncmp.c \
      ft_strncat.c \
      ft_strmapi.c \
      ft_strmap.c \
      ft_strlen.c \
      ft_strlcat.c \
      ft_strjoin.c \
      ft_striteri.c \
      ft_striter.c \
      ft_strequ.c \
      ft_strdup.c \
      ft_strdel.c \
      ft_strcpy.c \
      ft_strcmp.c \
      ft_strclr.c \
      ft_strchr.c \
      ft_strcat.c \
      ft_putstr_fd.c \
      ft_putstr.c \
      ft_putnbr_fd.c \
      ft_putnbr.c \
      ft_putendl_fd.c \
      ft_putendl.c \
      ft_putchar_fd.c \
      ft_putchar.c \
      ft_memset.c \
      ft_memmove.c \
      ft_memdel.c \
      ft_memcpy.c \
      ft_memcmp.c \
      ft_memchr.c \
      ft_memccpy.c \
      ft_memalloc.c \
      ft_lstnew.c \
      ft_lstmap.c \
      ft_lstiter.c \
      ft_lstdelone.c \
      ft_lstdel.c \
      ft_lstadd.c \
      ft_itoa.c \
      ft_isprint.c \
      ft_isdigit.c \
      ft_isascii.c \
      ft_isalpha.c \
      ft_isalnum.c \
      ft_bzero.c \
      ft_atoi.c

SRCO = ft_toupper.o \
       ft_tolower.o \
       ft_strtrim.o \
       ft_strsub.o \
       ft_strstr.o \
       ft_strsplit.o \
       ft_strrchr.o \
       ft_strnstr.o \
       ft_strnew.o \
       ft_strnequ.o \
       ft_strncpy.o \
       ft_strncmp.o \
       ft_strncat.o \
       ft_strmapi.o \
       ft_strmap.o \
       ft_strlen.o \
       ft_strlcat.o \
       ft_strjoin.o \
       ft_striteri.o \
       ft_striter.o \
       ft_strequ.o \
       ft_strdup.o \
       ft_strdel.o \
       ft_strcpy.o \
       ft_strcmp.o \
       ft_strclr.o \
       ft_strchr.o \
       ft_strcat.o \
       ft_putstr_fd.o \
       ft_putstr.o \
       ft_putnbr_fd.o \
       ft_putnbr.o \
       ft_putendl_fd.o \
       ft_putendl.o \
       ft_putchar_fd.o \
       ft_putchar.o \
       ft_memset.o \
       ft_memmove.o \
       ft_memdel.o \
       ft_memcpy.o \
       ft_memcmp.o \
       ft_memchr.o \
       ft_memccpy.o \
       ft_memalloc.o \
       ft_lstnew.o \
       ft_lstmap.o \
       ft_lstiter.o \
       ft_lstdelone.o \
       ft_lstdel.o \
       ft_lstadd.o \
       ft_itoa.o \
       ft_isprint.o \
       ft_isdigit.o \
       ft_isascii.o \
       ft_isalpha.o \
       ft_isalnum.o \
       ft_bzero.o \
       ft_atoi.o 

NAME = libft

FLAG = -Wall -Wextra -Werror

all: ${NAME}

${NAME}:
	gcc ${FLAG} -c $(SRC) main.c
	gcc -o ${NAME} ${SRCO} main.o

clean:
	/bin/rm -f ${SRCO}
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f ${NAME}

re: clean fclean all
