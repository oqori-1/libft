#include"libft.h"

typedef struct s_list
{
void *content;
struct s_list *next;
}              t_list;


int ft_lstsize(t_list *lst)
{
     if (!lst)
     {
          return 0;
     }
     
     int count = 0;

     t_list *tmp = lst;
     while (tmp != NULL)
     {
          count++;
          tmp = tmp->next;
     }
     return count;
}
