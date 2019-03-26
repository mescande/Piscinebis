int ft_recursive_factorial(int nb)
{
	if (nb <= 2)
	{
		if (nb < 0)
			nb=0;
		return nb;
	}
	return nb*ft_iterative_factorial(nb-1);
}
