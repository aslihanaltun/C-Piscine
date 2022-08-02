/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:37:36 by myurtogl          #+#    #+#             */
/*   Updated: 2022/03/02 12:39:16 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*array;
	int	range;

	count = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	array = (int *)malloc(range * sizeof(int));
	while (count < range)
	{
		array[count] = min + count;
		count++;
	}
	return (array);
}
/*
int main()
{
	printf("%d\n", ft_range(1,3)[0]);
	printf("%d\n", ft_range(1,3)[1]);
}*/
