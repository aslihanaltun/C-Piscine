/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:14:33 by myurtogl          #+#    #+#             */
/*   Updated: 2022/03/02 18:30:26 by myurtogl         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}

int	ft_len(int size, char **strs, char *sep)
{	
	int	count;
	int	count2;
	int	result;

	count = 0;
	result = 0;
	while (count < size)
	{
		count2 = 0;
		while (strs[count][count2] != '\0')
		{
			count2 ++;
		}
		result += count2;
		count ++;
	}
	result += (size - 1) * ft_strlen(sep) + 1;
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	int		count2;
	int		writec;
	int		sepc;
	char	*str;

	if (size == 0)
		return (str = malloc(0 * sizeof(char)));
	str = (char *)malloc(ft_len(size, strs, sep) * sizeof(char));
	count = 0;
	writec = 0;
	while (count < size)
	{	
		count2 = 0;
		while (strs[count][count2] != '\0')
			str[writec++] = strs[count][count2++];
		sepc = 0;
		while (sep[sepc] != '\0'
			&& writec < ft_len(size, strs, sep) - 1)
			str[writec++] = sep[sepc++];
		count ++;
	}
	str[ft_len(size, strs, sep) - 1] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *strs[] = {"hey", "merhaba", "42"};
	char *temp;
	temp = ft_strjoin(3, strs, "//");
	printf("%d\n", ft_len(3, strs, "//"));
	printf("%s", ft_strjoin(3, strs, "//"));
	free(temp);
	return (0);
}*/
