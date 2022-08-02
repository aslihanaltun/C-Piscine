/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:10:42 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 10:14:31 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (((32 <= str[count]) && (str[count] <= 127)) || str[count] == '\0')
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
