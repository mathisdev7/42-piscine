/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:50:43 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/20 18:02:35 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	between_a_and_z;

	i = 0;
	while (str[i])
	{
		between_a_and_z = (str[i] >= 'a' && str[i] <= 'z');
		if (between_a_and_z)
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
