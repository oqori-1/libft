#include"libft.h"


void ft_putnbr(int nb,int fd){
     long nbr = nb;
     if (nbr < 0)
     {
          write(fd,"-",1);
          nbr = -nbr;
     }
     

     if (nbr > 9)
     {
          ft_putnbr(nbr / 10,fd);
     }
     char c = nbr % 10 + '0';
    write(fd,&c,1);
}

void ft_putnbr_fd(int n, int fd){
     ft_putnbr(n,fd);

}

