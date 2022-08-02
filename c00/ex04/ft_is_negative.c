/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:30:56 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/12 16:11:36 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	c;
	char	d;

	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
	else
	{
		d = 'P';
		ft_putchar(d);
	}
}
