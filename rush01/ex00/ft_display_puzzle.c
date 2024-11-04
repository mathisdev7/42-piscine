/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_puzzle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:51:34 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/28 15:49:38 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putstr(char *str);

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
			return (ft_putstr("2147483648"));
		else
			nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = '0' + (nb % 10);
	write(1, &c, 1);
}

void	ft_display_puzzle(int grid[4][4])
{
	int	j;
	int	k;

	j = 0;
	while (j < 4)
	{
		k = 0;
		while (k < 4)
		{
			ft_putnbr(grid[j][k]);
			if (k < 4)
				write(1, " ", 1);
			k++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	ft_display_puzzle_with_clues(int grid[6][7])
{
	int	j;
	int	k;

	j = 0;
	while (j < 6)
	{
		k = 0;
		while (k < 6)
		{
			ft_putnbr(grid[j][k]);
			if (k < 5)
				write(1, " ", 1);
			k++;
		}
		write(1, "\n", 1);
		j++;
	}
}
