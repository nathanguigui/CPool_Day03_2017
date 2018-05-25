/*
** EPITECH PROJECT, 2017
** my_print_digits.c
** File description:
** 
*/

int		my_print_digits(void)
{
	int	num;

	num = '0';
	while (num <='9')
	{
		my_putchar(num);
		num=num+1;
	}
	return (0);
}
