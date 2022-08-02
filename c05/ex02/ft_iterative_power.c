/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:51:24 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/27 11:27:21 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	temp;

	count = 0;
	temp = 1;
	if (power < 0)
		return (0);
	else if (nb == 0)
	{	
		if (power == 0)
			return (1);
		else
			return (0);
	}
	else
	{	
		while (count < power)
		{	
			temp = nb * temp;
			count ++;
		}
	}	
	return (temp);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(-5,1));
}*/
