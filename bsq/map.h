/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:12:23 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 17:22:06 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

void	print_map(char **map, int rows, int cols);
char	**read_map(const char *filename, int *rows, int *cols, char *empty,
			char *obstacle, char *full);
typedef struct s_map
{
	int                     i;
        int                     rows;
        int                     cols;
        char            obstacle;
        char            full;
        char            empty;
        char            **map;
}	t_map;

#endif
