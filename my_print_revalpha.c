/*
** EPITECH PROJECT, 2017
** my_print_revalpha
** File description:
** 
*/

int		my_print_revalpha(void)
{
	int	num;

	num = 122;
	while (num >= 97)
	{
		my_putchar(num);
		num=num-1;
	}
	my_putchar('\n');
	return (0);
}
