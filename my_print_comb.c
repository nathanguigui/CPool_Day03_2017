/*
** EPITECH PROJECT, 2017
** my_print_comb
** File description:
** 
*/

void	my_assembl(char a, char b, char c);

void	my_boucle(char a, char b, char c)
{
		while (a < '8')
	{
		while (b < '9')
		{
			while (c < '9')
			{
				c = c + 1;
					if (a < b && b < c)
						my_assembl(a, b, c);
			}
			c = '0';
			b = b + 1;
		}
		b = '0';
		a = a + 1;
	}
}

void	my_assembl(char a, char b, char c)
	{
		my_putchar(a);
		my_putchar(b);
		my_putchar(c);
		if (a != '7')
		{
			my_putchar(',');
			my_putchar(' ');
		}
	}

int	my_print_comb(void)
{
	char a;
	char b;
	char c;

	a= '0';
	b= '1';
	c= '2';
	my_assembl(a, b, c);
	my_boucle(a, b, c);
	return(0);	
}
