/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:18:49 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/20 11:47:42 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	rush01(int x, int y)
{
	int	i;

	i = 0;
	if (x < 0 || y < 0)
	{
		ft_putstr("You can't use negative numbers, sorry.\n");
	}
	else
	{
		write_x(x, '/', '*', '\\');
		while ((i != y - 2) && (y > 1))
		{
			write_x(x, '*', ' ', '*');
			i++;
		}
		if (y != 1)
		{
			write_x(x, '\\', '*', '/');
		}
	}
}
