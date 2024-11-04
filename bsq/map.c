/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:11:42 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 13:33:53 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "map.h"

void	print_map(char **map, int rows, int cols)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			putchar(map[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}

char	**read_map(const char *filename, int *rows, int *cols, char *empty,
			char *obstacle, char *full)
{
	FILE	*file;
	char	**map;
	int		i;

	i = 0;
	file = fopen(filename, "r");
	if (!file)
	{
		perror("Could not open file");
		exit(EXIT_FAILURE);
	}
	fscanf(file, "%d %c %c %c\n", rows, empty, obstacle, full);
	*cols = *rows;
	map = malloc(*rows * sizeof(char *));
	while (i < *rows)
	{
		map[i] = malloc((*cols + 1) * sizeof(char));
		fgets(map[i], *cols + 2, file);
		i++;
	}
	fclose(file);
	return (map);
}
