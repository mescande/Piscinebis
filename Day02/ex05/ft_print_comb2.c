#include "all.h"

void ft_putnbr(unsigned int i)
{
	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + i);
	}
	else
	{
		unsigned int j = i/10;
		ft_putchar(j + '0');
		ft_putchar(i - (j * 10) + '0');
	}
	return;
}


void ft_print_comb2(void)
{
	char i=0;
	char j;
	while (i <= 98)
	{
		j=i+1;
		while (j <= 99)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putnbr(j);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
	return;
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
