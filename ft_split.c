#include"libft.h"


static int count_word(char *str,char c){
     int i =0;
     int count =0;
//"  hello world  "
    while (str[i])
    {
          if (str[i] != c)
          {
            count++;
              while (str[i] &&str[i] != c)
              {
                i++;
              }
          }
          
          while (str[i] && str[i] == c)
          {
            i++;
          }
          
    }

   return count;

}


char **ft_split(char *s, char c)
{
    int count_world = count_word(s,c);
 int start =0;
     int end =0;
    char **res = malloc( (count_world + 1) * sizeof(char *));
  int i =0;
int b =0;
// "  hello   world  "
    while (s[i])
    {
      if (s[i] != c)
      {
        start =i ;
        while (s[i] && s[i] != c)
        {
          i++;
        }
        end = i+1;
        char *p = malloc(end - start+1);
        int a =0;
        while (a <= end - start)
        {
          p[a] = s[start];
          start++;
          a++;
        }
        p[a]='\0';
           
        res[b] = p;
        b++;

      } else{
        i++;
      }

    }
    res[b] = NULL;
    return res;
}