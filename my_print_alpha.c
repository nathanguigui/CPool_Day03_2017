/*
** EPITECH PROJECT, 2017
** my_print_alpha
** File description:
** 
*/

int		my_print_alpha(void)
{
	int	num;

	num = 97;
	while (num <= 122)
	{
		my_putchar(num);
		num=num+1;
	}
	my_putchar('\n');
	return (0);
}
