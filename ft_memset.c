#include"libft.h"


void * ft_memset( void * pointer, int value, size_t count )
{
     unsigned char *p = (unsigned char *) pointer;

     size_t i =0;
     
     while (i < count)
     {
          p[i] = (unsigned char) value;
          i++;
     }
     return pointer;
}