/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:52:45 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/27 19:10:57 by myurtogl         ###   ########.fr       */
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
	write(1, "\n", 1);
}

int	main(int ac, char **argv)
{
	if (ac >= 1)
		ft_printarr(argv[0]);
}
