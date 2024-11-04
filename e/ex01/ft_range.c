/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:24:45 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/29 11:58:01 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*max_min;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	max_min = malloc(max - min);
	while (min != max)
	{
		max_min[i] = min;
		min++;
		i++;
	}
	return (max_min);
}
