/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:12:02 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 18:09:09 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "square.h"

#include <stdlib.h>

#include <stdlib.h>

void init_dp(int ***dp, int rows, int cols) {
    int i = 0;
    *dp = malloc(rows * sizeof(int *));
    while (i < rows) {
        (*dp)[i] = malloc(cols * sizeof(int));
        i++;
    }
}

void free_dp(int **dp, int rows) {
    int i = 0;
    while (i < rows) {
        free(dp[i]);
        i++;
    }
    free(dp);
}

int min(int a, int b, int c) {
    if (a < b && a < c) return a;
    if (b < c) return b;
    return c;
}

void update_dp(int **dp, t_Map *map, t_Square *max_square) {
    int i = 0, j;
    while (i < map->rows) {
        j = 0;
        while (j < map->cols) {
            if (map->map[i][j] == map->obstacle)
                dp[i][j] = 0;
            else if (i == 0 || j == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
            if (dp[i][j] > max_square->size)
                *max_square = (t_Square){i, j, dp[i][j]};
            j++;
        }
        i++;
    }
}

t_Square find_largest_square(t_Map *map) {
    int **dp;
    t_Square max_square = {0, 0, 0};
    
    init_dp(&dp, map->rows, map->cols);
    update_dp(dp, map, &max_square);
    free_dp(dp, map->rows);
    
    return max_square;
}

