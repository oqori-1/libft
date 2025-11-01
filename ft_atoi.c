#include "libft.h"


int ft_atoi(char *str)
{
     int res =0;
     int i =0;
     int sign = 1;
     while (str[i] == ' '|| str[i] == '\n' ||  str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
     {
          i++;
     }
     if (str[i] == '-' || str[i] == '+')
     {
          if (str[i] == '-')
          {
               sign = -sign;
          }
          i++;
     }
     while (str[i] >= '0' && str[i]<= '9')
     {
          res = res * 10 + (str[i] - '0');
          i++;
     }
     return res * sign;
}