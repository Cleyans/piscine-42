#include <unistd.h>

void	ft_print_numbers(void)
{
	write (1, "0123456789", 10);
}

OR

void	ft_print_numbers(void)
{
	char src;
	
	src = '0';
	while (src <= '9')
	{
		write(1, &src, 1);
		src++;
	}
	write(1, "\n", 1);
}