#include"libft.h"


void bzero(void *s, size_t n)
{
     unsigned char *p = (unsigned char *) s;

     size_t i = 0;
     while (i < n)
     {
          p[i] = 0;
          i++;
     }
     
}
