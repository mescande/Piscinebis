int ft_is_prime(int nb)
{
	int i = 2;
	while (i*i <= nb)
		if (nb % i++==0)
			return 0;
	return 1;
}
