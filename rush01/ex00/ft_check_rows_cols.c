/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rows_cols.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:54:39 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/28 16:06:54 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_4_cols(int grid[6][7], int i)
{
	if (grid[i][0] == 4)
	{
		grid[i][1] = 1;
		grid[i][2] = 2;
		grid[i][3] = 3;
		grid[i][4] = 4;
	}
	if (grid[i][5] == 4)
	{
		grid[i][4] = 1;
		grid[i][3] = 2;
		grid[i][2] = 3;
		grid[i][1] = 4;
	}
}

void	check_4_rows(int grid[6][7], int i)
{
	while (i <= 5)
	{
		if (grid[0][i] == 4)
		{
			grid[1][i] = 1;
			grid[2][i] = 2;
			grid[3][i] = 3;
			grid[4][i] = 4;
		}
		if (grid[5][i] == 4)
		{
			grid[4][i] = 1;
			grid[3][i] = 2;
			grid[2][i] = 3;
			grid[1][i] = 4;
		}
		check_4_cols(grid, i);
		i++;
	}
}
