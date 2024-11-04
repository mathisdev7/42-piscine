/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:35:24 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/18 11:15:29 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	myprint(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		myprint(nb / 10);
		myprint(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/**
int	main(void)
{
	int	nbr;

	nbr = 37;
	ft_ft(&nbr);
	myprint(nbr);
	return (nbr);
}
*/
