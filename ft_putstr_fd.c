#include"libft.h"

void ft_putstr_fd(char *s, int fd){
     if (!s)
        return;
     int l = ft_strlen(s);
     write(fd,s,l);
}