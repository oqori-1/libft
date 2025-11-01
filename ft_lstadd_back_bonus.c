
#include"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
     if (!lst || !new)
     {
          return ;
     }
     if (*lst == NULL)
     {
          *lst = new;
          return;
     }
     
     
     t_list *tmp = *lst;


     while (tmp->next != NULL)
     {
         tmp = tmp->next;
     }
     
     tmp->next = new;

}
