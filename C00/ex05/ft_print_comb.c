#include <unistd.h>

void	ft_write(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (!(i == '7' && j == '8' && k == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i;
		while (j <= '8')
		{
			k = j;
			while (k <= '9')
			{
				if (i != j && j != k && k != i)
					ft_write(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
int	main()
{
	ft_print_comb();
	return (0);
}
