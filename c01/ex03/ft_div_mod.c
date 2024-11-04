/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:21:06 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/18 14:07:26 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/**
int main(void)
{
	int	a = 24;
	int	b = 23;
	int	div = 0;
	int	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("Result: %d\nRemaining: %d\n", div, mod);	
	return 0;
}
*/
