#include"libft.h"



void ft_lstclear(t_list **lst, void (*del)(void*)){

     t_list *p = *lst;
     t_list *tmp;
     while (p != NULL)
     {
          tmp = p->next;
          del(p->content);
          
          free(p);
          p= tmp;
     }
     *lst = NULL;
     
}