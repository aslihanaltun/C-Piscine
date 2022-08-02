/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:05:27 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/21 13:15:37 by myurtogl         ###   ########.fr       */
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

int	ft_while(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	int	count;
	int	diff;

	count = 0;
	diff = ft_strlen(s1) - ft_strlen(s2);
	if (diff < 0)
	{
		return (-ft_while(s2, s1, n));
	}	
	else
	{
		return (ft_while(s1, s2, n));
	}
}
/*
int main()
{	
	char s1[] = "wqeewq";
	char s2[] = "w1ew";
	printf("%d", ft_strncmp(s1, s2, 2));
	printf("%d", strncmp(s1, s2, 2));
}*/
