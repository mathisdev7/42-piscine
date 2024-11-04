/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:08:01 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/18 14:15:15 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_result;
	int	mod_result;

	div_result = *a / *b;
	mod_result = *a % *b;
	*a = div_result;
	*b = mod_result;
}
/**
int main(void)
{
	int a = 20;
	int b = 20;

	int *ap = &a;
	int *bp = &b;

	ft_ultimate_div_mod(ap, bp);

	printf("Result: %d\nRemaining: %d\n", a, b);
	return 0;
}
*/
