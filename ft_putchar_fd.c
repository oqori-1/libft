#include"libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd){
     write(fd,&c,1);
}

int main(int argc, char const *argv[])
{
     int fd = open("output.txt",O_RDONLY, 0644);

     ft_putchar_fd('a',fd);
     return 0;
}
