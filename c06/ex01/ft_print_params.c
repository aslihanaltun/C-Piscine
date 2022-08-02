/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:55:12 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/27 17:55:24 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printarr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count ++;
	}
}

int	main(int ac, char **argv)
{	
	int	params;

	if (ac >= 1)
	{
		params = 1;
		while (params < ac)
		{
			ft_printarr(argv[params]);
			write(1, "\n", 1);
			params ++;
		}
	}
}
