/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:40:57 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 09:49:47 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c <= 31)
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int		count;
	char	replace[3];

	count = 0;
	replace[0] = '\\';
	while (str[count] != '\0')
	{
		if (ft_is_printable(str[count]))
		{
			write(1, &str[count], 1);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[count] / 16]);
			ft_putchar("0123456789abcdef"[str[count] % 16]);
		}
		count++;
	}
}
