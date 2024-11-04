/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:40:43 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/25 18:19:58 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	number;
	int	i;

	number = 1;
	if (nb < 0)
		return (0);
	i = 0;
	while (i < nb)
	{
		number *= nb - i;
		i++;
	}
	return (number);
}
