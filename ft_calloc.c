#include"libft.h"


void *calloc(size_t count, size_t size){

     void *ptr = malloc(count * size);
     if (!ptr)
     {
          return NULL;
     }
     

     size_t i =0;
     unsigned char *str = (unsigned char *)ptr  ;
     

     while (i < count * size)
     {
          str[i] = 0;
          i++;
     }
     return ptr;
     
}
