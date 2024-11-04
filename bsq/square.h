/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:12:38 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 18:09:02 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_H
# define SQUARE_H

typedef struct {
    char **map;
    int rows;
    int cols;
    char obstacle;
} t_Map;

typedef struct t_Square
{
	int	x;
	int	y;
	int	size;
}	t_Square;

t_Square	find_largest_square(t_Map *map);
void		draw_square(char **map, t_Square square, char full);

#endif
