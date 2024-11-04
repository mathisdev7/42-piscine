/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:55:15 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/21 16:55:36 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	between_a_and_z;

	i = 0;
	while (str[i] != '\0')
	{
		between_a_and_z = (str[i] >= 'A' && str[i] <= 'Z');
		if (between_a_and_z)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
