char *ft_strrev(char *str)
{
	int i=0, j=0;
	while (str[i] != '\0')
		i++;
	char res[i]
	while (i >= 0)
		res[j++] = str[--i];
	return res;
}
