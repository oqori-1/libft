#include"libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
     size_t len_dst =0;

     while (dst[len_dst] && len_dst < dstsize)
         len_dst++;

     size_t len_src =0;

      while (src[len_src])
         len_src++;

     size_t j = 0;
 if (dstsize == 0)
          return len_src;

     size_t len =  dstsize - len_dst - 1;

    
          
     if (len_dst >= dstsize)
     {
          return dstsize + len_src;
     }

          while (j < len && src[j] )
          {
               dst[len_dst+j] = src[j];
               j++;
          }
          dst[len_dst+j]='\0';
    
     return len_dst + len_src;
}
