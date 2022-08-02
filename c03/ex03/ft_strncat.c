/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:18:20 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/23 08:49:01 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	int				limit;

	limit = ft_strlen(dest);
	count = 0;
	while (count < nb && src[count] != '\0')
	{
		dest[limit + count] = src[count];
		count ++;
	}
	dest[limit + count] = '\0';
	return (dest);
}
/*
int main()
{
	char dest[80] = "mehmet";
	char src[6] = "deniz";
	printf("%s\n", ft_strncat(dest, src, 8));
	char dest1[80] = "mehmet";
	char src1[6] = "deniz";
	printf("%s", strncat(dest1, src1, 8));
}*/
