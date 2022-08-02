/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:12:41 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/12 18:06:53 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_3num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{	
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_3num(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a ++;
		b = a + 1;
		c = b + 1;
	}
}
