/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:38:03 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/28 13:24:50 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' || s2[count] == '\0')
	{
		if (s1[count] == s2[count])
			count ++;
		else
			return (s1[count] - s2[count]);
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_printarr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count ++;
	}
}

int	main(int ac, char **argv)
{	
	int		count;
	int		count2;

	count2 = 0;
	while (count2 < ac - 1)
	{
		count = 1;
		while (count < ac - 1)
		{
			if ((ft_strcmp(argv[count], argv[count + 1]) > 0))
				ft_swap(&argv[count], &argv[count + 1]);
			count ++;
		}
		count2 ++;
	}
	count = 1;
	while (count < ac)
	{
		ft_printarr(argv[count]);
		write(1, "\n", 1);
		count ++;
	}
}
