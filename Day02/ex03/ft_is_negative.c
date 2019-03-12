#include "all.h"

void ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
	return;
}

int main(void)
{
	ft_is_negative(-1);
	return 0;
}
