#include"libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
     const unsigned char *p1 = (const unsigned char*) ptr1;
     const unsigned char *p2 = (const unsigned char*) ptr2;

     size_t i = 0;



     while (i < num)
     {
          if (p1[i] != p2[i])
          {
               return (p1[i] - p2[i]);
          }
          i++;
     }
     return (0);
}


int main(void)
{
	char a[] = "Hello";
	char b[] = "Hello";
	char c[] = "Helli";
	char d[] = "Hellz";
	char e[] = "Hello, World!";

	printf("----- BASIC TESTS -----\n");
	printf("1. %d\n", ft_memcmp(a, b, 5));    // 0 (متطابقة)
	printf("2. %d\n", ft_memcmp(a, c, 5));    // موجب (لأن 'o' > 'i')
	printf("3. %d\n", ft_memcmp(a, d, 5));    // سالب (لأن 'o' < 'z')

	printf("\n----- PARTIAL LENGTH TESTS -----\n");
	printf("4. %d\n", ft_memcmp(a, e, 3));    // 0 (الأحرف الثلاثة الأولى متشابهة)
	printf("5. %d\n", ft_memcmp(a, e, 6));    // سالب (لأن '\0' < ',')

	printf("\n----- BINARY TESTS -----\n");
	unsigned char x[] = {0x10, 0x20, 0x30};
	unsigned char y[] = {0x10, 0x20, 0x40};
	printf("6. %d\n", ft_memcmp(x, y, 3));    // سالب (0x30 - 0x40 = -16)

	printf("\n----- ZERO LENGTH TEST -----\n");
	printf("7. %d\n", ft_memcmp(a, d, 0));    // 0 (لا مقارنة)
}
