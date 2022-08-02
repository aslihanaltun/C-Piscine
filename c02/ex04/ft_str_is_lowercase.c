/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:06:52 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/19 13:08:06 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{	
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((('a' <= str[count]) && (str[count] <= 'z')) || str[count] == '\0')
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
