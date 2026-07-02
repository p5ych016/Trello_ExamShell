#include <unistd.h>

void ft_putnbr(int nb)
{
    char l;
    if (nb < 0)
    {
        write(1,"-",1);
        nb = nb * (-1);
    }

    if (nb >= 10)
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
    else{
        l=nb + '0';
        write(1,&l,1);
    }

} 

int main ()
{
    int i = 1;
    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1,"fizzbuzz\n",9);
        }
        if (i % 3 == 0)
        {
            write(1,"fizz",4);
        }
        else if (i % 5 == 0)
        {
            write(1,"buzz",4);
        }
        else
        {
           ft_putnbr(i); 
        }
        write(1,"\n",1);
        i++;
    }
}