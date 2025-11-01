#include"libft.h"


int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
     if (n == 0)
     {
          return 0;
     }
     
     size_t i =0;
     while (i < n && s1[i] && s2[i] )
     {
          if ((unsigned char )s1[i] != (unsigned char )s2[i])
          {
               return ((unsigned char ) s1[i] - (unsigned char )  s2[i]);
          }
          i++;
     }
      if (i < n) 
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);

     return 0;
}

int main(int argc, char const *argv[])
{
     printf("%d\n",ft_strncmp("he","hello",3));
     return 0;
}
