#include"libft.h"

char *ft_strchr(const char *s, int c){

    
     int i =0;
     while (s[i])
     {
          if (s[i] == (unsigned char)c )
          {
              return (char *)&s[i];
          } 
          i++;
     }
     if ( s[i] == (unsigned char) c )
     {
        return (char *)&s[i];
     }
     
     return NULL;
}


#include <string.h>

// افترض أن دالتك ft_strchr مكتوبة مسبقاً
char *ft_strchr(const char *s, int c);

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "";
    char str3[] = "aaaaaa";

    //1. البحث عن حرف موجود في السلسلة
    printf("Test 1: %s\n", ft_strchr(str1, 'W')); // "World!"

    // 2. البحث عن حرف غير موجود
    printf("Test 2: %p\n", ft_strchr(str1, 'z')); // NULL

    // 3. البحث عن نهاية السلسلة '\0'
    printf("Test 3: %s\n", ft_strchr(str1, '\0')); // ""

    // 4. البحث في سلسلة فارغة
    printf("Test 4: %p\n", ft_strchr(str2, 'a')); // NULL

    // // 5. البحث عن أول حرف متكرر
    printf("Test 5: %s\n", ft_strchr(str3, 'a')); // "aaaaaa"

    // // 6. البحث عن حرف في أول موقع
    printf("Test 6: %s\n", ft_strchr(str1, 'H')); // "Hello, World!"

    // // 7. البحث عن حرف في آخر موقع
    printf("Test 7: %s\n", ft_strchr(str1, '!')); // "!"

    return 0;
}
