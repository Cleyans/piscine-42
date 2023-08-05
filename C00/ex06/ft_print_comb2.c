#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    callputchar(int a, int b)
{
    ft_putchar(a / 10 + '0');
    ft_putchar(a % 10 + '0');
    ft_putchar(' ');
    ft_putchar(b / 10 + '0');
    ft_putchar(b % 10 + '0');
    if (a != 98)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb(void)
{
    int    a;
    int    b;
    
    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            callputchar(a, b);
            b++;
        }
    a++;
    }
    write(1, "\n", 1);
}
int    main()
{
    ft_print_comb();
    return (0);
}