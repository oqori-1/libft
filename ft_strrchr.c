#include"libft.h"

char *ft_strrchr(const char *s, int c){

     size_t i; 
     
     i = 0;
     while (s[i])
          i++;
  
     while (i >= 0)
     {
          if (s[i] == (char)c )
          {
              return (char *) &s[i];
          } 
          i--;
     }
     return NULL;
}




int main(void)
{
    char s1[] = "banana";
    char s2[] = "Hello, World!";
    char s3[] = "";
    char s4[] = "abcabcabc";
    char s5[] = "no digits here";
    char s6[] = "multiple\0hidden";
    char s7[] = "End with a dot.";
    char s8[] = ".....";
    char s9[] = "A";
    char s10[] = "testing \t spaces\n";

    printf("----- BASIC TESTS -----\n");
    printf("1. %s\n", ft_strrchr(s1, 'a'));   // "a"
    printf("2. %s\n", ft_strrchr(s1, 'b'));   // "banana"
    printf("3. %p\n", ft_strrchr(s1, 'z'));   // NULL
    printf("4. %s\n", ft_strrchr(s1, '\0'));  // ""

    printf("\n----- STRING WITH SYMBOLS -----\n");
    printf("5. %s\n", ft_strrchr(s2, 'o'));   // "orld!"
    printf("6. %s\n", ft_strrchr(s2, 'H'));   // "Hello, World!"
    printf("7. %s\n", ft_strrchr(s2, '!'));   // "!"
    printf("8. %p\n", ft_strrchr(s2, '?'));   // NULL

    printf("\n----- EMPTY STRING -----\n");
    printf("9. %p\n", ft_strrchr(s3, 'x'));   // NULL
    printf("10. %s\n", ft_strrchr(s3, '\0')); // ""

    printf("\n----- REPEATED CHARACTERS -----\n");
    printf("11. %s\n", ft_strrchr(s4, 'a'));  // "abc"
    printf("12. %s\n", ft_strrchr(s4, 'b'));  // "bc"
    printf("13. %s\n", ft_strrchr(s4, 'c'));  // "c"

    printf("\n----- SPACES AND SPECIALS -----\n");
    printf("14. %s\n", ft_strrchr(s5, ' '));  // " here"
    printf("15. %s\n", ft_strrchr(s10, ' ')); // " spaces\n"
    printf("16. %s\n", ft_strrchr(s10, '\t')); // "\t spaces\n"

    printf("\n----- NULL TERMINATOR TEST -----\n");
    printf("17. %s\n", ft_strrchr(s6, '\0')); // ""
    printf("18. %p\n", ft_strrchr(s6, 'h'));  // NULL (لأن بعد '\0')

    printf("\n----- EDGE CASES -----\n");
    printf("19. %s\n", ft_strrchr(s7, '.'));  // "."
    printf("20. %s\n", ft_strrchr(s8, '.'));  // "....."
    printf("21. %s\n", ft_strrchr(s9, 'A'));  // "A"
    printf("22. %p\n", ft_strrchr(s9, 'B'));  // NULL

    return 0;
}
