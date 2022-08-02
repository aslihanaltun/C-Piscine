/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:38:20 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/26 11:27:12 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	minus;
	int	result;

	count = 0;
	minus = 1;
	result = 0;
	while (str[count] == ' ' || (str[count] >= '\t' && str[count] <= '\r'))
	{
		count ++;
	}
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
		{
			minus *= -1;
		}
		count ++;
	}
	while ('0' <= str[count] && str[count] <= '9')
	{
		result = (str[count] - '0') + result * 10;
		count ++;
	}	
	return (minus * result);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("      	---+1958--+-ab567"));
}ü


----135        135
---135          -135


"         asdads234243dfdsdsf234432324"
