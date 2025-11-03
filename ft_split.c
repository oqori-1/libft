#include"libft.h"


static int count_word(const char *str,char c){
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


char **ft_split(const char *s, char c)
{
  if (!s)
    return NULL;
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

        start = i;

        while (s[i] && s[i] != c)
        {
          i++;
        }

        end = i;

        char *p = malloc( (end - start + 1) * sizeof(char));
        int a = 0;

        while (  start <end )
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

int main(int argc, char const *argv[])
{
  char **s = ft_split("salm     cv       bien    ",' ');
  int i =0;
  while (i < 3)
  {
    printf("%s",s[i]);
    printf("#\n");
 
    i++;
  }
  
  return 0;
}
