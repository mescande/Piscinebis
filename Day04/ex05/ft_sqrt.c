int ft_sqrt(int nb)
{
	int i=1;
	int j = 1;
	while (j < nb)
	{
		i++;
		j=i*i;
	}
	if (j == nb)
		return j;
	return 0;
}
