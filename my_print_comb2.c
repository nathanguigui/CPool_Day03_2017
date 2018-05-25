/*
** EPITECH PROJECT, 2017
** my_print_comb2
** File description:
** 
*/

void	my_assembler(int a)
{
	
	int	nbr1;
	int	nbr2;

	nbr1 = a / 10 + 48;
	nbr2 = a % 10 + 48;
	my_putchar(nbr1);
	my_putchar(nbr2);
}

int	my_print_comb2(void)
{
	int a;
	int b;

	a = 0;

	while (a <  100)
	{
		b = a + 1;
		while (b < 100)
		{
			my_assembler(a);
			my_putchar(' ');
			my_assembler(b);
			if(a != 98 || b != 99)
			{
				my_putchar(',');
				my_putchar(' ');
			}
			b = b + 1;
		}
		a = a + 1;
	}
	return (0);
}
