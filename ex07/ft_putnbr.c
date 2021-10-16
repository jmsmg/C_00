#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_rec(int nb)
{
    if (nb > 9)
    {
        ft_rec(nb / 10);
        nb = nb % 10 + 48;
        ft_putchar(nb);
    }
    else
    {
        nb = nb + 48;
        ft_putchar(nb);
    }
}

void    ft_putnbr(int nb)
{
    if (nb >= 0 && nb <= 9)
    {
        nb = nb + 48;
        ft_putchar(nb);
    }
    else if (nb <= 2147483647 && nb > 9)
        ft_rec(nb);
    else if (nb == -2147483648)
        write(1, "-2147483648", 11);
    else
    {
        nb = -nb;
        ft_putchar('-');
        ft_rec(nb);
    }
}
