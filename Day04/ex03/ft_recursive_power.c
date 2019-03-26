#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 1)
		return nb;
	if (power % 2 == 1)
		return nb * ft_recursive_power(nb, power - 1);
	nb = ft_recursive_power(nb, power/2);
	return nb*nb;
}

int main()
{
	printf("%d\n", ft_recursive_power(2,32));
	return 0;
}
