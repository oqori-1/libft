#include "libft.h"

static int match_at(char *s1,char *s2,size_t i,size_t le)
{
    
     size_t len_s2;
     size_t j;

     len_s2 =0;
     while (s2[len_s2])
     {
          len_s2++;
     }
     
      j = 0;
     while (s1[i + j] && i + j < le && j < len_s2 )
     {
          if (s1[i + j]!=s2[j])
          {
               
               return 0;
          } 
          j++;
     }
     return (s2[j] == '\0');
}

char *ft_strnstr(const char *str ,const char *s , size_t len)
{
     
     
  
     size_t i ;
     
     i =  0;
    
     
     if (s[0] == '\0')
     {
          return  (char*) &str[i];
     }
     
     while (str[i]&& i < len)
     {
          if (str[i] == s[0]  && match_at(str,s,i,len))
          {
               return  (char*) &str[i];
          }
          i++;
     }
     return NULL;
}

int main(void)
{
    printf("18. %s\n", ft_strnstr("hello world", "world", 11)); // "world" (len يساوي موقع نهاية str)
printf("19. %s\n", ft_strnstr("hello world", "world", 10)); // NULL (len قبل بداية s)



}