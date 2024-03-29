/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:35:52 by mmondell          #+#    #+#             */
/*   Updated: 2021/10/26 11:18:32 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>

# define BASE10 "0123456789"
# define BASE16 "0123456789abcdef"

/*------BONUS CONTENT------*/

typedef struct s_list{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstadd_back(t_list **alst, t_list *new_node);
void	ft_lstadd_front(t_list **alst, t_list *new_node);
int		ft_lstsize(t_list *lst);

/*------ GENERAL FUNCTIONS------*/

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t 	ft_tabsize(char **tab);
void 	ft_print_tab(char **tab);
void	ft_putchar(char c);
void	ft_putnchar(char c, int n);
void	ft_putnbr(long long num);
void	ft_putunsnbr(unsigned int nb);
void	ft_putstr(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_putnbr_base(long long num, int base_len, char *base, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_free(void *ptr);
void	ft_freetab(char** tab);
char	*ft_str_to_upper(char *str);
char	*ft_str_to_lower( char *str);
char	*ft_strnew(size_t size);
char	*ft_memalloc(size_t size);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char	*haystack, const char *needle, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, char *src);
long	ft_atol(const char *str);
int		ft_atoi(const char *str);
int		ft_numlen(long long num, int base_len);
int		ft_isupper(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_nbrlen(long long nbr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/* GET_NEXT_LINE */

int		get_next_line(int fd, char **line);

#endif
