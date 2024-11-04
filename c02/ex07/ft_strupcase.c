/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:53:11 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/22 10:13:34 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	between_a_and_z;

	i = 0;
	while (str[i])
	{
		between_a_and_z = (str[i] >= 'a' && str[i] <= 'z');
		if (between_a_and_z)
		{
			str[i] -= 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
