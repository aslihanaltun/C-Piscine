/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:52:41 by myurtogl          #+#    #+#             */
/*   Updated: 2022/03/02 18:37:34 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

int	ft_basecheck(char *base)
{
	int	outer;
	int	inner;

	outer = 0;
	while (outer < ft_strlen(base))
	{
		inner = outer + 1;
		while (inner < ft_strlen(base))
		{
			if (0 <= base[inner] && base[inner] <= 32)
				return (0);
			if (0 <= base[outer] && base[outer] <= 32)
				return (0);
			if (base[inner] == base[outer])
				return (0);
			if (base[inner] == '-' || base[inner] == '+')
				return (0);
			if (base[outer] == '-' || base[outer] == '+')
				return (0);
			inner++;
		}
		outer++;
	}
	return (1);
}

int	ft_digits(long nbr, char *base_to)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count ++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		count ++;
		nbr /= ft_strlen(base_to);
	}
	return (count);
}

char	*ft_itoa(long nbr, char *base_to, char *str, int digits)
{
	if (ft_basecheck(base_to) == 1)
	{
		if (nbr < 0)
		{
			str[0] = '-';
			nbr *= -1;
			while (1 < digits)
			{
				str[digits-- - 1] = base_to[nbr % ft_strlen(base_to)];
				nbr /= ft_strlen(base_to);
			}
		}
		else
		{
			while (0 < digits)
			{
				str[digits-- - 1] = base_to[nbr % ft_strlen(base_to)];
				nbr /= ft_strlen(base_to);
			}
		}
		return (str);
	}
	return (NULL);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	num;
	char	*str;
	int		digits;

	digits = 0;
	if (ft_strlen(base_from) <= 1 || ft_strlen(base_to) <= 1)
		return (NULL);
	if (ft_basecheck(base_from) == 0 || ft_basecheck(base_to) == 0)
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	if (num == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = base_to[0];
		str[1] = '\0';
		return (str);
	}	
	digits = ft_digits(num, base_to);
	str = malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_itoa(num, base_to, str, digits);
	if (str != NULL)
		str[digits] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_digits(0, "0123456789"));
	printf("%s\n", ft_convert_base("   --234", "0123456789", "0123456789abcdef"));
	printf("%s\n", ft_convert_base("-2147483648", "0123456789", "0123456789"));
	return(0);
}*/
