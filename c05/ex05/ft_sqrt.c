/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 09:18:43 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/28 19:52:03 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (nb > 0)
	{
		while ((count * count) < nb + 1)
		{
			if ((count * count) == nb)
			{
				return (count);
			}
			count++;
		}
	}
	return (0);
}

#include <stdio.h>
int main()
{
		printf("%d", ft_sqrt(2147483648));
}
