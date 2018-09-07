
#ifndef FT_LIBFT_H
# define FT_LIBFT_H

typedef unsigned int size_t;

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

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
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void(*f)(char *));
void	ft_striteri(char *s, void(*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void const *content, size_t content_size);
t_list	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
