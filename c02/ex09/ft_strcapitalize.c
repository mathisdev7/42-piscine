/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:14:58 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/22 11:46:55 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		a = (str[i - 1] >= 'a' && str[i - 1] <= 'z');
		b = (str[i - 1] >= 'A' && str[i - 1] <= 'Z');
		c = (str[i - 1] >= '0' && str[i - 1] <= '9');
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && !a && !b && !c)
			str[i] -= 32;
		else if ((a || b || c) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
