void insert(int *t, int i)
{
	if (i > 0)
		if (t[i - 1] > t[i])
		{
			int a = t[i];
			t[i] = t[i - 1];
			t[i - 1] = a;
			insert(t, i-1);
		}
	return;
}


void ft_sort_integer_table(int *tab, int size)
{
	int i=1;
	while ( i < size)
		insert(tab, i++);
	return;
}
