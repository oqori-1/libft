#include"libft.h"

void * ft_memmove( void * destination, const void * source, size_t size )
{
     unsigned char *des = (unsigned char *) destination;
      unsigned char *src = (unsigned char *) source;
       size_t i =0;
     //   "hello word"
       if (src > des)
       {
               while (i < size)
               {
                    des[i] = src[i];
                    i++;
               }
       } else
       {
               while (i < size)
               {
                    des[size -1 - i] = src[size-1-i];
                    i++;
               }
       }

       return des;

 
}
