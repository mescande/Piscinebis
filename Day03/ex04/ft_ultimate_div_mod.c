void ft_ultimate_div_mod( int *a, int *b)
{
	int i = *a / *b;
	*b = *a % *b;
	*a = i;
	return;
}
