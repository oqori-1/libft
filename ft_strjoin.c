#include"libft.h"



char *ft_strjoin(char const *s1, char const *s2){
     if (!s1 || !s2)
    return NULL;
     size_t l1 = ft_strlen(s1);
     size_t l2 = ft_strlen(s2);

     char *str = malloc((l1+l2)+1);
     if (!str)
           return NULL;
     size_t i =0;
     while (s1[i])
     {
          str[i] = s1[i];
          i++;

     }
     size_t j = 0;
     while (s2[j])
     {
          str[i] = s2[j];
          j++;
          i++;
     }
     str[i] = '\0';
     return str;

}