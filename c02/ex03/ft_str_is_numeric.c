/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:01:44 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 10:13:02 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{	
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (('0' <= str[count]) && (str[count] <= '9'))
		{
			count ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
