
#ifndef libft_H
#define libft_H

#include <stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct s_list
{
void *content;
struct s_list *next;
}              t_list;

int  ft_isalpha(int c);

char *ft_strchr(const char *s, int c);
void *memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);

void *ft_memset(void *ptr, int value, size_t num);

char *ft_strnstr(char *str , char *s, size_t num);

size_t ft_strlen ( const char *str);
int ft_isdigit(int c);

char *ft_strnstr(char *str , char *s, size_t num);
char *ft_substr(char const *s, unsigned int start, size_t len);

char *ft_strtrim(char const *s1, char const *set);
char *ft_strdup(char *str);
//int count_word(char *str,char c);
char **ft_split(char  *s, char c);
char *ft_itoa(int n);
void ft_putchar_fd(char c, int fd);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstadd_back(t_list **lst, t_list *new);
#endif