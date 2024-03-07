#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	write (1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

OR

void	ft_print_reverse_alphabet(void)
{
	char src;
	
	src = 'z';
	while (src >= 'a')
	{
		write(1, &src, 1);
		src--;
	}
	write(1, "\n", 1);
}