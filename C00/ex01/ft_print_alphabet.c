#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

OR

void	ft_print_alphabet(void)
{
	char src;
	
	stc = 'a';
	while (src <= 'z')
	{
		write(1, &src, 1);
		src++;
	}
	write(1, "\n", 1);
}