#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	nomb;
	int	comp;

	nomb = 1;
	while (nomb < argc)
	{
		comp = 0;
		while (argv[nomb][comp] != '\0')
		{
			write(1, &argv[nomb][comp], 1);
			comp++;
		}
		write(1, "\n", 1);
		nomb++;
	}
	return (0);
}
