/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 07:35:35 by myurtogl          #+#    #+#             */
/*   Updated: 2022/03/03 13:13:42 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

char	*ft_strdup(char *str)
{
	int		count;
	int		size;
	char	*dest;

	count = 0;
	size = ft_strlen(str);
	dest = malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (str[count] != '\0')
	{
		dest[count] = str[count];
		count ++;
	}
	dest[count] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*structs;
	int					count;

	count = 0;
	structs = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (structs == NULL)
		return (NULL);
	while (count < ac)
	{	
		structs[count].size = ft_strlen(av[count]);
		structs[count].str = av[count];
		structs[count].copy = ft_strdup(av[count]);
		count ++;
	}
	structs[count].str = 0;
	structs[count].copy = 0;
	return (structs);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}*/
