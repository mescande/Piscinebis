#include <stdio.h>

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

int main()
{
	int t[10]={2,6,45,14,1,2,8,3};
	ft_sort_integer_table(t, 10);
	int i=0;
	while (i<10)
		printf("%d\t", t[i++]);
	printf("\n");
	return 0;
}
