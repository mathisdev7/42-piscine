/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:29:36 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/20 21:43:18 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	between_a_and_z_upper;

	i = 0;
	while (str[i])
	{
		between_a_and_z_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (between_a_and_z_upper)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
