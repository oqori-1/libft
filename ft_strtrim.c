#include"libft.h"

static int is_set(const char *str,char c){
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
      
     size_t end ;
    
     
     while (s1[i])
     {
          if (is_set(set,s1[i]))
          {
               start++;
          } else{
               break;
          }
          i++;
     }
      end = ft_strlen(s1);
    while (end > start && is_set(set, s1[end - 1]))
        end--;
     
 

    if (start == end)
        return ft_strdup("");
        
     char *p = malloc(end - start + 1);
     if (!p)
     {
          return NULL;
     }
     
    size_t j = 0;
     while (start < end)
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
