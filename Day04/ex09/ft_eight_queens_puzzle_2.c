#include <unistd.h>

int	ft_putchar(char c)
{
	write(1,&c,1);
	return 0;
}
void del_queen(int **t, int h, int l)
{
	t[h][l] = 0;
	int i = 1;
	int j = 1;
	while (h - i >= 0 || h + i < 8)
	{
		if (h - i >= 0)
			t[h-i][l]--;
		if (h + i < 8)
			t[h+i][l]--;
		while (l - j >= 0 || l + j < 8)
		{
			if (l - j >= 0)
			{
				t[h][l-j]--;
				if (h-i >= 0 && i == j)
					t[h-i][l-j]--;
				if (h+i < 8 && i == j)
					t[h+i][l-j]--;
			}
			if (l + j < 8)
			{
				t[h][l+j]--;
				if (h-i >= 0 && i == j)
					t[h-i][l-j]--1;
				if (h+i < 8 && i == j)
					t[h+i][l-j]--;
			}
			j++;
		}
		i++;
	}
	return;
}

void add_queen(int **t, int h, int l)
{
	t[h][l] = -1;
	int i = 1;
	int j = 1;
	while (h - i >= 0 || h + i < 8)
	{
		if (h - i >= 0)
			t[h-i][l]++;
		if (h + i < 8)
			t[h+i][l]++;
		while (l - j >= 0 || l + j < 8)
		{
			if (l - j >= 0)
			{
				t[h][l-j]++;
				if (h-i >= 0 && i == j)
					t[h-i][l-j]++;
				if (h+i < 8 && i == j)
					t[h+i][l-j]++;
			}
			if (l + j < 8)
			{
				t[h][l+j]++;
				if (h-i >= 0 && i == j)
					t[h-i][l-j]++;
				if (h+i < 8 && i == j)
					t[h+i][l-j]++;
			}
			j++;
		}
		i++;
	}
	return;
}

void print_ans(int **t)
{
	int i=0, j=0;
	while (i < 8)
	{
		while (j < 8)
		{
			if (t[j][i] == -1)
			{
				ft_putchar('0' + i);
				j=8;
			}
			j++;
		}
		i++;
	}
	return;
}

int reflexion(t, h, l)
{
	if (l == 8)
	{
		int t=0;
		while (l-- > 0)
			if (t[h][l] == -1)
				t=1;
		if (t==0 && h == 7)
			return 1;
		if (t==0)
			return 0;
		h++;
	}
	if
	if (t[h][l] == 0)
		add_queen(t, h, l);

}

void ft_eight_queens_puzzle_2(void)
{
	int t[8][8];
	int i=0;
	
}
















