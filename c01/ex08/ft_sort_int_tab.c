/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaltun   <asaltun@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 07:52:22 by myurtogl          #+#    #+#             */
/*   Updated: 2022/02/16 07:52:26 by myurtogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	temp[0];
	int	n;

	n = size - 1;
	count = 0;
	while (-1 < n)
	{
		while (count < size)
		{	
			if (tab[count] > tab[count + 1])
			{	
				temp[0] = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = temp[0];
				count++;
			}
			count ++;
		}
		count = 0;
		n --;
	}
}
