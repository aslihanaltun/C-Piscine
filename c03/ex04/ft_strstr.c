/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:33:37 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 11:35:39 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;

	count = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[count] != '\0')
	{
		count2 = 0;
		while (count2 < ft_strlen(to_find))
		{
			if (str[count + count2] != to_find[count2])
				break ;
			count2 ++;
		}
		if (count2 == ft_strlen(to_find))
		{
			return (str + count);
		}
		count ++;
	}
	return (NULL);
}
/*
int main()
{	
	char str[] = "a";
	char to_find[] = "";
	printf("%s\n", strstr(str, to_find));
	printf("%s", ft_strstr(str, to_find));
}*/
