int ft_atoi(char *str)
{
	int i=0, res = 0;
	while (str[i] != '\0')
		res= res*10 + str[i++];
	return res;
}
