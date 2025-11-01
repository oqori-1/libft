#include"libft.h"

static int count_nbr(long n)
{
    if (n == 0)
        return 1;

    int c = 0;
    if (n < 0)
    {
        c++;
        n = -n;
    }

    while (n != 0)
    {
        c++;
        n /= 10;
    }
    return c;
}

char *ft_itoa(int nb)
{

     long n = nb;  
     unsigned long num;
    int c = count_nbr(n);
    char *str_nbr = malloc(c + 1);
    if (!str_nbr)
        return NULL;
    str_nbr[c] = '\0';

    int index = 0;
    if (n < 0)
    {
        str_nbr[0] = '-';
         num = (unsigned long)  (-n);
        index = 1;
    } else
    {
     num = n;
    }
    
    c--;

    while (c >= index)
    {
        str_nbr[c] = (num % 10) + '0';
        num /= 10;
        c--;
    }

    return str_nbr;
}

int main(void)
{
    printf("%s\n", ft_itoa(0));             // "0"
    printf("%s\n", ft_itoa(12345));         // "12345"
    printf("%s\n", ft_itoa(-9876));         // "-9876"
    printf("%s\n", ft_itoa(2147483647));    // "2147483647"
    printf("%s\n", ft_itoa(-2147483648));   // "-2147483648"
    return 0;
}


// char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
