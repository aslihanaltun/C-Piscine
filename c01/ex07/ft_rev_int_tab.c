/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurtogl <myurtogl@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 07:50:06 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/16 07:50:08 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	rev_count;
	int	temp[1];

	count = 0;
	rev_count = size - 1;
	while (count < size / 2)
	{	
		temp[0] = tab[count];
		tab[count] = tab[rev_count];
		tab[rev_count] = temp[0];
		count ++;
		rev_count --;
	}
}	
