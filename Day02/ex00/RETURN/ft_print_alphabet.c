void ft_print_alphabet(void)
{
	char a[30] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
		'o','p','q','r','s','t','u','v','w','x','y','z'};
	int i = 0;
	while (i < 26)
		ft_putchar(a[i++]);
	return;
}
