/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:40:52 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/27 11:25:31 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	result;
	int	count;

	result = 1;
	count = 1;
	if (nb < 0)
	{
		return (0);
	}	
	else if (nb == 0)
		return (1);
	else
	{
		while (count < nb)
		{
			result += result * count;
			count ++;
		}
		return (result);
	}
}
/*
#include <stdio.h>
int main()
{
		printf("%d\n", ft_iterative_factorial(2147483647));	
		printf("%d\n", ft_iterative_factorial(0));

		printf("%d\n", ft_iterative_factorial(2));
		printf("%d\n", ft_iterative_factorial(1));
		printf("%d\n", ft_iterative_factorial(3));
}*/
