/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:51:18 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/17 12:01:12 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	first_number;

	first_number = '0';
	while (first_number <= '9')
	{
		write(1, &first_number, 1);
		first_number++;
	}
}
