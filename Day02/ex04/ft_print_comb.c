#include "all.h"

void ft_print_comb(void)
{
	char i='0';
	char j, k;
	while (i < '8')
	{
		j=i+1;
		while (j < '9')
		{
			k=j+1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return;
}

int main(void)
{
	ft_print_comb();
	return 0;
}
