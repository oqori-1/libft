#include"libft.h"

typedef struct s_list
{
void *content;
struct s_list *next;
}              t_list;

t_list *ft_lstlast(t_list *lst)
{
     if (!lst)
        return NULL;

     t_list *tmp = lst;
     while (tmp->next != NULL)
     {
          tmp = tmp->next;
     }
     return tmp;
}