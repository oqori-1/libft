#include"libft.h"


void * ft_memset( void * pointer, int value, size_t count )
{
      size_t i;
     unsigned char *p;;

      i =0;
     p = (unsigned char *) pointer;
     while (i < count)
     {
          p[i] = (unsigned char) value;
          i++;
     }
     return pointer;
}


int main(int argc, char const *argv[])
{
   

     char *s = ft_memset(NULL,'1',3);
    printf("%s\n",s);
      
     
     return 0;
}
