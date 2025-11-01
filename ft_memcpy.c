#include"libft.h"



void *ft_memcpy(void *dest, const void *src, size_t n)
{

      
     
     unsigned char *p_dest ;
     unsigned char *p_src ;

     if (!dest && !src)
        return NULL;
        
     size_t i ;

     p_dest = (unsigned  char *) dest;
     p_src  = (unsigned  char *) src;
     i = 0;


     while (i < n)
     {
          p_dest[i] = p_src[i];
          i++;
     }
     return dest;
}


int main(int argc, char const *argv[])
{
      char *des = "omar123 qori";
      char *src = "othmane";

     char *str = ft_memcpy(des,src,7);

     
     printf("%s\n",str);
     return 0;
}
