/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_puzzle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:55:11 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/30 09:14:50 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	char_to_int(char c);

void	ft_draw_puzzle(char *argv[], int i, int j, int grid[6][7])
{
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0)
		{
			if (i == 8 || i == 16 || i == 24)
				j = 0;
			if (i >= 0 && i <= 6)
				grid[0][j + 1] = char_to_int(argv[1][i]);
			else if (i >= 8 && i <= 14)
				grid[j + 1][5] = char_to_int(argv[1][i]);
			else if (i >= 16 && i <= 22)
				grid[j + 1][0] = char_to_int(argv[1][i]);
			else if (i >= 24 && i <= 30)
				grid[5][j + 1] = char_to_int(argv[1][i]);
			j++;
		}
		i++;
	}
}
