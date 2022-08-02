/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:16:05 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/13 07:46:05 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_four_num(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	write(1, " ", 1);
	ft_putchar(c);
	ft_putchar(d);
	if (!((a == '9' && b == '8') && (c == '9' && d == '9')))
	{
		write(1, ", ", 2);
	}
}

void	whiles(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_put_four_num(a, b, c, d);
					d++;
				}
				c += 1;
				d = '0';
			}
			b += 1;
			c = a;
			d = b + 1;
		}
		a += 1;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	whiles(a, b, c, d);
}
