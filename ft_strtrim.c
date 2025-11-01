#include"libft.h"

static int is_equal(const char *str,char c){
     int i =0;
     while (str[i])
     {
          if (str[i]== c)
          {
               return 1;
          }
          
          
          i++;
     }
     return 0;
}


char *ft_strtrim(char const *s1, char const *set){

     if (!s1 || !set)
          return NULL;
     size_t i =0;
     size_t start = 0;
      size_t l = ft_strlen(s1) - 1;
     size_t end = l;
    
     
     while (s1[i])
     {
          if (is_equal(set,s1[i]))
          {
               start++;
          } else{
               break;
          }
          i++;
     }
     while (l > 0 && is_equal(set,s1[l]) )
     {
           end--;
          l--;
     }
     
     if (start > end)
    return ft_strdup(""); 

     char *p = malloc(end - start + 2);
     if (!p)
     {
          return NULL;
     }
     
    size_t j = 0;
     while (start <= end)
     {
          p[j] = s1[start];
          j++;
          start++;
     }

     p[j] = '\0';
     
     return p;
     
}



int main(int argc, char const *argv[])
{
     printf("%s\n",ft_strtrim("    othmane qori  "," "));
     return 0;
}
