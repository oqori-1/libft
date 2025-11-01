#include"libft.h"

void * ft_memmove( void * destination, const void * source, size_t size )
{
     unsigned char *des;
     const unsigned char *src;
      size_t i;


     des = (unsigned char *) destination;
     src = (const unsigned char *) source;

      if (!destination && !source)
      {
          return NULL;
      }
      
      i = 0;
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
int main(int argc, char const *argv[])
{
     char str[] = "hello world";
 
    

    printf("%s\n",  ft_memmove(str + 2, str, 5));
    printf("%s\n",memmove(str + 2, str, 5) );
    return 0;
     return 0;
}
