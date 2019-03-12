#include "all.h"

void ft_print_reverse_alphabet(void)
{
	char a[30] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
		'o','p','q','r','s','t','u','v','w','x','y','z'};
	int i = 25;
	while (i >= 0)
		ft_putchar(a[i--]);
	return;
}

int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
