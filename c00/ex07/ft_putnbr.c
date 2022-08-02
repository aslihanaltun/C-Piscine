/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:57:48 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/12 16:22:19 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	inttocharandprint(int b)
{
	char	num;

	num = b + 48;
	ft_putchar(num);
}

void	inttocharandprintbutnotsingle(int c)
{
	int	counter;
	int	ncounter;
	int	d;
	int	array[10];

	counter = 0;
	d = c;
	while (c != 0)
	{
		c = c / 10;
		counter++;
	}
		ncounter = counter - 1;
	while (ncounter > -1)
	{
		array[ncounter] = d % 10;
		d /= 10;
		ncounter --;
	}
		ncounter += 1;
	while (ncounter < counter)
	{	
		inttocharandprint(array[ncounter]);
		ncounter++;
	}
}

void	negativedestroyer(int d)
{
	if (d == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		d = 47483648;
		inttocharandprintbutnotsingle(d);
	}
	else
	{
		ft_putchar('-');
		d = -d;
		inttocharandprintbutnotsingle(d);
	}
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		negativedestroyer(num);
	}
	else if (num < 10)
	{
		inttocharandprint(num);
	}
	else
	{
		inttocharandprintbutnotsingle(num);
	}
}
