#include "all.h"

//TODO : gestion de -2.147.483.648 !!

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb=-nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return;
}

int	main(void)
{
	int a = -2147483648;
	ft_putnbr(a);
	return 0;
}
