/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:40:42 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/30 10:12:25 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*src_dup;
	int		i;
	int		len;

	i = 0;
	len = 0;
	src_dup = "";
	if (src[i] == 0)
		return (src_dup);
	while (src[len])
		len++;
	src_dup = (char *)malloc(sizeof(*src) * len + 1);
	while (i < len)
	{
		src_dup[i] = src[i];
		i++;
	}
	return (src_dup);
}
