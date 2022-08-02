/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:30:26 by myurtogl          #+#    #+#             */
/*   Updated: 2022/03/01 19:14:58 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*dest;

	count = 0;
	while (src[count] != '\0')
		count ++;
	dest = (char *)malloc((count + 1) * sizeof(char));
	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char src[] = "-*29hey .\n#";
	printf("%s\n", ft_strdup(src));
	printf("%s", strdup(src));
	return (0);
}*/
