#include"libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
     size_t l =0;
     while (s[l])
     {
          l++;
     }
     char *p = malloc((l+1) * sizeof(char));
     if (!p)
     {
          return NULL;
     }
     

    size_t i =0;
     while (s[i])
     {
          char c = f(i,s[i]);
          p[i] = c;
          i++;
     }
     p[i] = '\0';
     return p;
}


