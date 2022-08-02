/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:52:45 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/23 11:13:50 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{	
		count ++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	limit;

	limit = ft_strlen(dest);
	count = ft_strlen(dest);
	count2 = 0;
	if (size <= limit)
		return (limit + ft_strlen(src));
	while (src[count] != '\0' && limit + 1 < size)
	{
		dest[count] = src[count2];
		count ++;
		count2 ++;
	}
	dest[count] = '\0';
	return (limit + ft_strlen(src));
}
/*
int main()
{
	char dest[9] = "mehmetem";
	char src[1] = "";
	printf("%d\n", ft_strlcat(dest, src, 9));
	char dest1[9] = "mehmetem";
	char src1[1] = "";
	printf("%lu", strlcat(dest1, src1, 9));
}*/
