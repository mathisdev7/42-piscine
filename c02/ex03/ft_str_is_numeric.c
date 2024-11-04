/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:16:43 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/30 09:36:02 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	between_0_and_9;

	i = 0;
	while (str[i])
	{
		between_0_and_9 = (str[i] >= '0' && str[i] <= '9');
		if (between_0_and_9)
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

int     main()
{
        char str[] = "";

        ft_str_is_numeric(str);

        printf("%i", ft_str_is_numeric(str));

        return (0);
}
