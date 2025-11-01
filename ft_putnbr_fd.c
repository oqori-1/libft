#include"libft.h"


static void ft_putnbr(int nb,int fd){
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
int main(void)
{
    ft_putnbr_fd(12345, 1);  // يطبع: 12345
    write(1, "\n", 1);
    ft_putnbr_fd(-9876, 1);  // يطبع: -9876
    write(1, "\n", 1);
    return 0;
}

