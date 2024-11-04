/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:38:48 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/21 16:54:32 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	while (str[i])
	{
		is_printable = (str[i] >= 32 && str[i] <= 126);
		if (is_printable)
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
