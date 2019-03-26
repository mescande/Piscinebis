int ft_is_prime(int nb)
{
	int i = 2;
	while (i*i <= nb)
		if (nb % i++==0)
			return 0;
	return 1;
}

int ft_find_next_prime(int nb)
{
	int t=0;
	if (nb % 2 == 0)
		nb++;
	while (t=0)
	{
		t = ft_is_prime(nb);
		nb += 2;
	}
	return nb-2;
}
