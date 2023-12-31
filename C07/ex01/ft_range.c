#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pnt;
	int	pnt_len;
	int	i;

	if (min >= max)
		return (NULL);
	pnt_len = max - min;
	if (pnt_len < 1)
		pnt = NULL;
	else
	{
		pnt = malloc((pnt_len) * sizeof(int));
		if (!pnt)
			return (NULL);
		i = 0;
		while (i < pnt_len)
		{
			pnt[i] = (min + i);
			i++;
		}
	}
	return (pnt);
}
