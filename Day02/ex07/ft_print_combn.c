#include "all.h"
#include <stdio.h>
#include <stdlib.h>

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

void incre( int *i, int n, int act)
{
	i[act-1]++;
	if (act-2 >= 0 && i[act - 1] > 10 - n + 1)
		incre(i, n, act-1);
	i[act]=i[act-1]+1;
	return;
}

void transfer(int *a, int n)
{
	int i=0;
	int k=0;
	int j=1;
	int max=1;
	while (n-k > 0)
	{
		i=i*10+a[k++];
		max*=10;
		if (k != 1)
			j*=(a[k-1]-a[k-2]);
	}
	max=max/10;
	if (i < max && i != 0)
		ft_putchar('0');
	ft_putnbr(i);
	if (j!=1 || a[n-1]!=9 || a[0] != 10-n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return;
}

void ft_print_combn(int n)
{
	int i[n];
//	int t[10] = {0,9,89,789,6789,56789,456789,3456789,23456789,123456789};
	int k=0;
	while (k < n)
	{
		i[k]=k;
		k++;
	}
	while (i[0] <= 10 - n)
	{
		transfer(i, n);
		i[n-1]++;
		if (i[n-1]==10 && n != 1)
			incre(i, n, n-1);
	}
	return;
}

int main(void)
{
	ft_print_combn(4);
	return 0;
}
