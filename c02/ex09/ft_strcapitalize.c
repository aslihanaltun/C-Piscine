/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:19:25 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/20 13:32:53 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_numeric(char c)
{
	if (('0' <= c) && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_alpha(char c)
{
	if (('a' <= c) && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_upper(char c)
{
	if (('A' <= c) && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_alphanum(char c)
{
	if (ft_char_is_alpha(c) || ft_char_is_numeric(c) || ft_char_is_upper(c))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{	
	int	count;

	count = 0;
	if (ft_char_is_alpha(str[0]))
	{
		str[count] -= 32;
	}
	count ++;
	while (str[count] != '\0')
	{
		if (!ft_char_is_alphanum(str[count - 1]))
		{
			if (ft_char_is_alphanum(str[count]) && ft_char_is_alpha(str[count]))
					str[count] -= 32;
		}
		else
		{
			if (ft_char_is_alphanum(str[count]) && ft_char_is_upper(str[count]))
					str[count] += 32;
		}
		count ++;
	}
	return (str);
}
