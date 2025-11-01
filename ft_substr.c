#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return NULL;

    size_t l = 0;
    while (s[l])
        l++;

    size_t i = 0;
    int c = 0; 

    if (start >= l)
    {
        len = 0; 
        c = 1;   
    }

    char *p;
    if (c == 0) 
    {
        size_t len_p = l - start; 
        if (len_p < len)
            len = len_p; 
    }

    p = malloc(len + 1);
    if (!p)
        return NULL;

    while (i < len && s[start + i])
    {
        p[i] = s[start + i];
        i++;
    }
    p[i] = '\0';

    return p;
}



int main(int argc, char const *argv[])
{
    char *s = "Hello World";

	printf("1. %s\n", ft_substr(s, 0, 5));   // "Hello"
	printf("2. %s\n", ft_substr(s, 6, 5));   // "World"
	printf("3. %s\n", ft_substr(s, 6, 50));  // "World"
	printf("4. %s\n", ft_substr(s, 20, 5));  // "" (فارغ)
	printf("5. %s\n", ft_substr("", 0, 5));  // ""
	printf("6. %s\n", ft_substr("abc", 1, 0)); // ""
          return 0;
} 
