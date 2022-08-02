/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:39:39 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/26 11:41:40 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}

void	ft_edge(char *base)
{
	int			count;
	char		array[1024];
	long int	nbr;

	count = 0;
	nbr = 2147483648;
	while (0 < nbr)
	{
		array[count] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		count ++;
	}
	while (0 <= count)
	{
		write(1, &array[count - 1], 1);
		count --;
	}
}

int	ft_basecheck(char *base)
{
	int	outer;
	int	inner;

	outer = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (outer < ft_strlen(base))
	{
		inner = outer + 1;
		while (inner < ft_strlen(base))
		{
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

void	ft_putnbr_base(int nbr, char *base)
{	
	if (ft_basecheck(base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_edge(base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		ft_putnbr_base(nbr, base);
		return ;
	}	
	if (nbr < ft_strlen(base))
	{
		ft_putchar(base[nbr]);
		return ;
	}
	else
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	ft_putnbr_base(nbr % ft_strlen(base), base);
}

int main()
{
	ft_putnbr_base(19999999999,"0123456789");
}
