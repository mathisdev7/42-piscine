/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:17:07 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/28 18:06:53 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);
extern void	ft_putstr(char *str);
extern int	char_to_int(char c);

extern void	ft_display_puzzle(int grid[4][4]);
extern void	ft_display_puzzle_with_clues(int grid[6][7]);

extern void	ft_draw_puzzle(char *argv[], int i, int j, int grid[6][7]);
extern void	check_4_rows(int grid[6][7], int i);

void	resolve_puzzle(int i, int grid[6][7], int argc)
{
	int	j;
	int	new_grid[4][4];

	check_4_rows(grid, i);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			new_grid[i][j] = grid[i + 1][j + 1];
			j++;
		}
		i++;
	}
	i = 0;
	if (argc == 3)
		ft_display_puzzle_with_clues(grid);
	else
		ft_display_puzzle(new_grid);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	grid[6][7];

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 7)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	if (argc - 1 > 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_draw_puzzle(argv, i, j, grid);
	resolve_puzzle(i, grid, argc);
}
