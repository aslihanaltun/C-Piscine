/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaltun   <asaltun@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:57:23 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 11:02:09 by myurtogl         ###   ########.fr       */
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

int	ft_while(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0')
	{
		if (s1[count] > s2[count])
		{
			return (s1[count] - s2[count]);
		}
		else if (s2[count] > s1[count])
		{
			return (s1[count] - s2[count]);
		}
		else
		{
			count ++;
		}
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{	
	int	count;
	int	diff;

	count = 0;
	diff = ft_strlen(s1) - ft_strlen(s2);
	if (diff < 0)
	{
		return (-ft_while(s2, s1));
	}
	else
	{
		return (ft_while(s1, s2));
	}
}
/*
int main()
{	
	char s1[] = "";
	char s2[] = "";
	printf("%d", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
*/
