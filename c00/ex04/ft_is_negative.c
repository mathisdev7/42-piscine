/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:38:19 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/17 13:54:40 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	is_negative;
	char	is_positive;

	is_positive = 'P';
	is_negative = 'N';
	if (n < 0)
	{
		write(1, &is_negative, 1);
	}
	else
	{
		write(1, &is_positive, 1);
	}
}
