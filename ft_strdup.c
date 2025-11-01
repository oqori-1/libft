#include<stdlib.h>


char *ft_strdup(char *str){
     int l = 0;
     while (str[l])
          l++;
     int i =0;
     char *copy = malloc( (l + 1) * sizeof(char));
     while (str[i])
     {
          copy[i] = str[i];
          i++;
     }
     copy[i] = '\0';

     return copy;
     
}


