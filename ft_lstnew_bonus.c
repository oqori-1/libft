#include"libft.h"

typedef struct s_list
{
void *content;
struct s_list *next;
}              t_list;


t_list *ft_lstnew(void *content){
     t_list *new = malloc(sizeof(t_list));

     new->content = content;
     new->next = NULL;

     return new;


}