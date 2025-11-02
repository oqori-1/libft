#include"libft.h"

void ft_bzero(void *s, size_t n)
{
     // possible this  :
     // ft_memset(s,0,n);
     size_t i;
     unsigned char *p;
     
     
     p = (unsigned char *) s;
     i = 0;
     
    
     while (i < n)
     {
          p[i] = 0;
          i++;
     }
     
}
