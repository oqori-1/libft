#include"libft.h"


void *ft_memchr(const void *s, int c, size_t n)
{
     const unsigned char *str = (const unsigned char *) s;
	
     size_t i = 0;
	
	if (!s)
		return (NULL);
     while (i < n)
     {
          if (str[i] == (unsigned char)c)
          {
               return (void *) &str[i];
          }
          i++;
     }
     return NULL;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char data[] = "Hello, World!";

	printf("----- BASIC TESTS -----\n");
	printf("1. %s\n", (char *)ft_memchr(data, 'W', 13)); // "World!"
	printf("2. %s\n", (char *)ft_memchr(data, 'H', 13)); // "Hello, World!"
	printf("3. %p\n", ft_memchr(data, 'x', 13));         // NULL

	printf("\n----- BINARY DATA -----\n");
	unsigned char bytes[] = {0x10, 0x20, 0x30, 0x40, 0x50};
	printf("4. %p\n", ft_memchr(bytes, 0x30, 5));        // address of 0x30
	printf("5. %p\n", ft_memchr(bytes, 0x60, 5));        // NULL

	printf("\n----- LIMIT TESTS -----\n");
	printf("6. %s\n", (char *)ft_memchr(data, 'o', 5));  // finds first 'o' in "Hello"
	printf("7. %p\n", ft_memchr(data, 'W', 5));          // NULL (not in first 5 bytes)

	printf("\n----- EMPTY OR ZERO LENGTH -----\n");
	printf("8. %p\n", ft_memchr(data, 'H', 0));          // NULL
	printf("9. %p\n", ft_memchr("", 'a', 1));            // NULL
}

