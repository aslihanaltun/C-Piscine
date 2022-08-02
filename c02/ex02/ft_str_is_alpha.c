/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:56:37 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 10:03:21 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper_alpha(char c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_is_lower_alpha(char c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(ft_is_lower_alpha(str[index]) || ft_is_upper_alpha(str[index])))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
