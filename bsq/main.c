/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:58:46 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 18:11:07 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "square.h"

int	main(int argc, char **argv)
{
	char		**map;
	int			i;
	t_map		struct_map;
	t_Map		*map;
	t_Square	largest_square;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return (EXIT_FAILURE);
	}
	map = read_map(argv[1], &struct_map.rows, &struct_map.cols,
			&struct_map.empty, &struct_map.obstacle, &struct_map.full);
	largest_square = find_largest_square(map);
	draw_square(map, largest_square, struct_map.full);
	print_map(map, struct_map.rows, struct_map.cols);
	i = 0;
	while (i < struct_map.rows)
	{
		free(map[i]);
		i++;
	}
	free(map);
	return (EXIT_SUCCESS);
}
