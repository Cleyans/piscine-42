#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pnt;
	int	pnt_long;
	int	i;

	if (min >= max)
		return (NULL);
	pnt_long = max - min;
	if (pnt_long < 1)
		pnt = NULL;
	else
	{
		pnt = malloc((pnt_long) * sizeof(int));
		if (!pnt)
			return (NULL);
		i = 0;
		while (i < pnt_long)
		{
			pnt[i] = (min + i);
			i++;
		}
	}
	return (pnt);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	str_long;

	str_long = max - min;
	if (str_long < 1)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = ft_range(min, max);
		if (!range)
		{
			return (-1);
		}
	}
	return (str_long);
}
