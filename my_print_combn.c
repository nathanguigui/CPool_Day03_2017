/*
** EPITECH PROJECT, 2017
** my_print_combn
** File description:
** 
*/

int my_putchar();

int my_print_combn(int n)
{
	int	re;

	re = 0;
	while (n != 0)
	{
		my_putchar(re + 48);
		re = re + 1;
		n = n - 1;
	}
	return (0);
}
