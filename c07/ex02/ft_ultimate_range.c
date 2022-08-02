/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:56:28 by myurtogl          #+#    #+#             */
/*   Updated: 2022/03/01 18:38:56 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	limit;
	int	count;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	limit = max - min;
	*range = malloc(limit * sizeof(int));
	if (*range == NULL)
		return (-1);
	count = 0;
	while (count < limit)
	{
		(*range)[count] = min + count;
		count ++;
	}
	return (limit);
}
