#include"libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
     if (!lst || !f)
    return;

     t_list *tmp = lst;
     while (tmp != NULL)
     {
          f(tmp->content);
          tmp = tmp->next;
     }
     
}