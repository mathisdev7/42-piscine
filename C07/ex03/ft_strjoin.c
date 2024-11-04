/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:30:38 by mazeghou          #+#    #+#             */
/*   Updated: 2024/08/06 16:33:33 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int	ft_total_size(char **strs, char *sep, int size)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += sizeof(strs[i]);
		i++;
	}
	if (size > 1)
	{
		total_length += (size - 1) * sizeof(sep);
	}
	return (total_length - sizeof(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*str_joined_cat;

	i = 0;
	str_joined_cat = "";
	if (size == 0)
	{
		str_joined_cat = malloc(sizeof(char *));
		return (str_joined_cat);
	}
	str_joined_cat = malloc(ft_total_size(strs, sep, size));
	while (i < size)
	{
		str_joined_cat = ft_strcat(str_joined_cat, strs[i]);
		if (i + 1 != size)
			str_joined_cat = ft_strcat(str_joined_cat, sep);
		i++;
	}
	return (str_joined_cat);
}

int main(void)
{
	char *str[12] = { "test", "test", "test", "test", "test", "test", 
	"test", "test", "test", "test", "test", "test" };
	char *result = ft_strjoin(12, str, ", ");
	printf("%s", result);
	free(result);
}
