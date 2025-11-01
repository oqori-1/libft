#include "libft.h"


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize){

     size_t l = 0;
    
     l = ft_strlen(src);
     
     if (dstsize == 0)
     {
          return l;
     }


     
     
     size_t i =0;
     while (src[i] && i < dstsize -1)
     {
          dst[i] = src[i];
          i++;
     }
     dst[i] = '\0';
     return l;
}
int main() {
    char dst[6];
    const char *src = NULL;

    size_t len = ft_strlcpy(dst, src, 5);

   printf("dst = '%s'\n", dst);   // dst = 'Hello'
    printf("length of src = %zu\n", len); // 10
    return 0;
}