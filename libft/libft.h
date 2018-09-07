
#ifndef FT_LIBFT_H
# define FT_LIBFT_H

typedef unsigned int size_t;

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(char *str, char *to_find, size_t n);
char	*ft_strcmp(char *s1, char *s2);
char	*ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_toupper(char *str);
char	*ft_tolower(char *str);
int	ft_isalpha(char *str);
int	ft_isdigit(char *str);
int	ft_isascii(char *str);
int	ft_isprint(char *str);
int	ft_isalnum(char *str);
int	ft_atoi(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strchr(char *str, int nb);
char	*ft_strrchr(char *str, int nb);
void	*ft_memset(void *str, int nb, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memccpy(void *dest, void *src, int nb, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(void *str, int nb, size_t n);
void	ft_memcmp(void *s1, void *s2, size_t n);

#endif
