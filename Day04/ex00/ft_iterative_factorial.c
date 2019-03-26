int ft_iterative_factorial(int nb)
{
	int res=1;
	while (nb > 1)
		res *= nb--;
	if (nb < 0)
		return 0;
	return res;
}
