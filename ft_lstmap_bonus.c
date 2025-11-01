#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
     if (!lst || !f)
    return NULL;


     t_list *tmp = lst;

     t_list *new = malloc(sizeof(t_list));

     t_list *head= new;

      new->content = f(lst->content);
      new->next = NULL;
      tmp = lst->next;

     while (tmp != NULL)
     {
         t_list *s ;
      s= malloc(sizeof(t_list));
      if (!s)
{
    ft_lstclear(&head, del);
    return NULL;
}
          
          s->content = f(tmp->content);
          s->next = NULL;
          
          


           new->next = s;

          tmp = tmp->next;
          new = new->next;
         
     }
     return head;

   
}
