#include"libft.h"


void *ft_calloc(size_t count, size_t size){



     void *ptr = malloc(count * size);
     if (!ptr)
     {
          return NULL;
     }
     

     ft_bzero(ptr, count * size);
     // size_t i =0;
     // unsigned char *str = (unsigned char *)ptr  ;
     

     // while (i < count * size)
     // {
     //      str[i] = 0;
     //      i++;
     // }
     return ptr;
     
}
