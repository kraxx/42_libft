/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 01:00:39 by jchow             #+#    #+#             */
/*   Updated: 2017/11/22 01:40:12 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 4096
# define MAX(x, y) (x > y ? x : y)
# define MIN(x, y) (x < y ? x : y)
# define ABS(x) (x > 0 ? x : -x)

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef unsigned char		t_uc;
typedef unsigned int		t_ui;
typedef unsigned long long	t_ull;

typedef struct				s_list
{
	void					*content;
	size_t					content_size;
	struct s_list			*next;
}							t_list;

/*
** 42_libft pt. 1: libc functions
*/

void						*ft_memset(void *s, int c, size_t n);
void						ft_bzero(void *s, size_t n);
void						*ft_memcpy(void *dest, const void *src, size_t n);
void						*ft_memccpy(void *dest, const void *src,
							int c, size_t n);
void						*ft_memmove(void *dest, const void *src, size_t n);
void						*ft_memchr(const void *s, int c, size_t n);
int							ft_memcmp(const void *s1, const void *s2, size_t n);
size_t						ft_strlen(const char *s);
char						*ft_strdup(const char *s);
char						*ft_strcpy(char *dest, const char *src);
char						*ft_strncpy(char *dest, const char *src, size_t n);
char						*ft_strcat(char *dest, const char *src);
char						*ft_strncat(char *dest, const char *src, size_t n);
size_t						ft_strlcat(char *dest,
							const char *src, size_t size);
char						*ft_strchr(const char *s, int c);
char						*ft_strrchr(const char *s, int c);
char						*ft_strstr(const char *haystack,
							const char *needle);
char						*ft_strnstr(const char *haystack,
							const char *needle, size_t n);
int							ft_strcmp(const char *s1, const char *s2);
int							ft_strncmp(const char *s1,
							const char *s2, size_t n);
int							ft_atoi(const char *nptr);
int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isalnum(int c);
int							ft_isascii(int c);
int							ft_isprint(int c);
int							ft_toupper(int c);
int							ft_tolower(int c);

/*
** 42_libft pt. 2: additional functions
*/

void						*ft_memalloc(size_t size);
void						ft_memdel(void **ap);
char						*ft_strnew(size_t size);
void						ft_strdel(char **as);
void						ft_strclr(char *s);
void						ft_striter(char *s, void (*f)(char *));
void						ft_striteri(char *s, void (*f)(t_ui, char *));
char						*ft_strmap(char const *s, char (*f)(char));
char						*ft_strmapi(char const *s,
							char (*f)(unsigned int, char));
int							ft_strequ(char const *s1, char const *s2);
int							ft_strnequ(char const *s1,
							char const *s2, size_t n);
char						*ft_strsub(char const *s,
							t_ui start, size_t len);
char						*ft_strjoin(char const *s1, char const *s2);
char						*ft_strtrim(char const *s);
char						**ft_strsplit(char const *s, char c);
char						*ft_itoa(int n);
void						ft_putchar(char c);
void						ft_putstr(char const *s);
void						ft_putendl(char const *s);
void						ft_putnbr(int n);
void						ft_putchar_fd(char c, int fd);
void						ft_putstr_fd(char const *s, int fd);
void						ft_putendl_fd(char const *s, int fd);
void						ft_putnbr_fd(int n, int fd);

/*
** 42_libft pt. 3: bonus functions
*/

t_list						*ft_lstnew(void const *content,
							size_t content_size);
void						ft_lstdelone(t_list **alst,
							void (*del)(void *, size_t));
void						ft_lstdel(t_list **alst,
							void (*del)(void *, size_t));
void						ft_lstadd(t_list **alst, t_list *new);
void						ft_lstiter(t_list *lst,
							void (*f)(t_list *elem));
t_list						*ft_lstmap(t_list *lst,
							t_list *(*f)(t_list *elem));

/*
** ft_get_next_line (a 42 project of its own)
*/

int							ft_get_next_line(const int fd, char **line);

/*
** additional functions written for use in other 42 projects
*/

int							ft_isupper(int c);
int							ft_islower(int c);
int							ft_iswhitespace(int c);
int							ft_ishex(char c);
void						ft_swap(int *a, int *b);
char						*ft_strrev(char *str);
int							ft_atoi_ec(const char *nptr);
int							ft_atoi_strict(char *s);
t_ull						ft_atoull_base(const char *str, int base);
char						*ft_ulltoa_base(t_ull n, int base);
char						*ft_strupper(char *s);
char						*ft_strlower(char *s);
int							ft_arrsize(void **arr);
int							ft_numsize(int n, int base);
int							ft_indexof(const char *s, int c);
char						*ft_strnjoin(char const *s1, char const *s2,
							size_t l1, size_t l2);

#endif
