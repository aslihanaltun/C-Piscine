/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 09:06:32 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/27 11:35:57 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	count = 3;
	while (count < nb)
	{
		if ((nb % count) == 0)
		{	
			return (0);
		}
		count += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_is_prime(-12));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(-2));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(4219));
	printf("%d\n", ft_is_prime(7853));
	printf("%d\n", ft_is_prime(78989));
}*/
