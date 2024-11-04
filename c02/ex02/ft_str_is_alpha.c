/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:44:02 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/20 17:04:02 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	between_a_or_z;
	int	between_a2_or_z2;

	i = 0;
	while (str[i])
	{
		between_a_or_z = (str[i] >= 'a' && str[i] <= 'z');
		between_a2_or_z2 = (str[i] >= 'A' && str[i] <= 'Z');
		if (between_a_or_z || between_a2_or_z2)
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

/**
int	main(void)
{
	printf("%d", ft_str_is_alpha("test2"));
}
*/
