/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:30:38 by mazeghou          #+#    #+#             */
/*   Updated: 2024/08/01 09:47:57 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_size(char **strs)
{
	int	i;
	int	total_length;
	int	j;

	i = 0;
	total_length = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			total_length++;
		}
		i++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*str_joined_cat;

	i = 0;
	str_joined_cat = "";
	str_joined_cat = malloc(ft_total_size(strs) * sizeof(sep));
	while (i < size)
	{
		str_joined_cat = ft_strcat(str_joined_cat, strs[i]);
		if (i + 1 != size)
			str_joined_cat = ft_strcat(str_joined_cat, sep);
		i++;
	}
	return (str_joined_cat);
}
