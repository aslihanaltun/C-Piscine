/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:15:20 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 13:18:47 by myurtogl         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{	
	int	count;
	int	count2;
	int	limit;

	limit = ft_strlen(dest);
	count = ft_strlen(dest);
	count2 = 0;
	while (count < limit + ft_strlen(src))
	{
		dest[count] = src[count2];
		count ++;
		count2 ++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int main()
{
	char dest[80] = "mehmet";
	char src[13] = "wqqrwqe";
	printf("%s\n", ft_strcat(dest, src));
	char dest1[80] = "mehmet";
	char src1[13] = "wqqrwqe";
	printf("%s", strcat(dest1, src1));
}*/
