/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:44:19 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/18 12:20:18 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
int main()
{
	int a = 22;
	int b = 15;

	int *ap = &a;
	int *bp = &b;
	ft_swap(ap, bp);

	printf("%d %d", a, b);
	return 0;
}
*/
