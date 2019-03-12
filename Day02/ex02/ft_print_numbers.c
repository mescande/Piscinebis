#include "all.h"

void ft_print_numbers(void)
{
	int i='0';
	while (i <= '9')
		ft_putchar(i++);
	return;
}

int main(void)
{
	ft_print_numbers();
	return 0;
}
