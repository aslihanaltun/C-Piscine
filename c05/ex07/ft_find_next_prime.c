/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 09:15:35 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/27 11:38:22 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 3;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
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

int	ft_find_next_prime(int nb)
{	
	int	count;

	count = 0;
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (1)
	{
		if (ft_is_prime(nb + count))
		{
			return (nb + count);
		}
		count ++;
	}	
	return (-1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(2));
}*/
