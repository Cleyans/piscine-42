#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	comp;

	comp = 0;
	while (argv[0][comp] != '\0' && argc > 0)
	{
		write(1, &argv[0][comp], 1);
		comp++;
	}
	write(1, "\n", 1);
}
