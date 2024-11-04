/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:45:31 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/20 16:10:06 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

extern void	ft_putchar(char c);

void	write_x(int x, char first, char middle, char last)
{
	int	i;

	i = 0;
	while (i != x)
	{
		if (i == 0)
		{
			ft_putchar(first);
		}
		else if (i == x - 1)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	rush02(int x, int y)
{
	int	i;

	i = 0;
	if (x < 0 || y < 0)
	{
		ft_putstr("You can't put negative numbers, sorry.\n");
	}
	else
	{
		write_x(x, 'A', 'B', 'A');
		while ((i != y - 2) && (y > 1))
		{
			write_x(x, 'B', ' ', 'B');
			i++;
		}
		if (y > 1)
			write_x(x, 'C', 'B', 'C');
	}
}
