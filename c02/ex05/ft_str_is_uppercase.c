/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:08:47 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/19 13:10:04 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{	
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((('A' <= str[count]) && (str[count] <= 'Z')) || str[count] == '\0')
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
