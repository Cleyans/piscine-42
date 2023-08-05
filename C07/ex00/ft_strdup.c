#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (str[i]);
}

char	*ft_strdup(char *src)
{
	char		*dest;
	int			i;
	int			j;

	j = ft_strlen(src);
	dest = malloc(j + 1 * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
