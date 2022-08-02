/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:38:20 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/24 14:04:47 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count ++;
	}
	return (count);
}

int	ft_minus(char *str, int *k)
{
	int	count;
	int	minus;

	count = 0;
	minus = 1;
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
	*k = count;
	return (minus);
}

int	ft_basecheck(char *base)
{
	int	count;
	int	count2;

	count = 0;
	while (base[count] != '\0')
	{
		if (base[count] == '-' || base[count] == '+' || base[count] == ' ')
			return (1);
		if (!(31 < base[count] && base[count] <= 127))
			return (1);
		count2 = count + 1;
		while (base[count2] != '\0')
		{
			if (base[count] == base[count2])
				return (1);
			count2++;
		}
		count++;
	}
	return (count);
}

int	is_in_base(char str, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (str == base[count])
			return (count);
		count ++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	count;
	int	negative;
	int	result;
	int	count2;
	int	len;

	count = 0;
	result = 0;
	len = ft_basecheck(base);
	if (len >= 2)
	{
		negative = ft_minus(str, &count);
		count2 = is_in_base(str[count], base);
		while (count2 != -1)
		{
			result = (result * len) + count2;
			count++;
			count2 = is_in_base(str[count], base);
		}
		return (result * negative);
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi_base("  -----+2a4147--+-ab567", "0123456789abcdef"));
}*/
