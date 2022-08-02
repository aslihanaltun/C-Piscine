/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:47:52 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/27 11:26:27 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{	
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(6));
}*/
