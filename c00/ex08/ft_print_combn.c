/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:01:02 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/13 07:48:50 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	arrayfill(int array[], int n)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		ft_putchar(array[counter] + '0');
		counter++;
	}
}

int	indexfinder(int combn[], int n)
{
	int	counter;
	int	max;

	counter = 0;
	max = 10 - n;
	while (counter < n)
	{
		if (combn[counter] == max)
			return (counter - 1);
		if (counter == (n - 1) && combn[counter] < max)
			return (counter);
		counter++;
		max++;
	}
	return (-1);
}

void	addfunction(int array[], int n, int index)
{
	int	counter;

	counter = index + 1;
	array[index]++;
	array[index + 1] = 0;
	while (counter <= n)
	{
		array[counter] = array[counter - 1] + 1;
		counter++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[11];
	int	counter;
	int	position;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		counter = 0;
		while (counter < 11)
		{
			combn[counter] = counter;
			counter++;
		}
		while (indexfinder(combn, n) != -1)
		{
			position = indexfinder(combn, n);
			arrayfill(combn, n);
			addfunction(combn, n, position);
			write(1, ", ", 2);
		}
		arrayfill(combn, n);
	}
}
