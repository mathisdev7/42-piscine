/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:37:11 by mazeghou          #+#    #+#             */
/*   Updated: 2024/08/07 10:50:08 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAXBUFLEN 100000

int	check_argc(int i, char *c)
{
	if (i != 4)
	{
		fprintf(stderr, "Usage: %s <arg1> <arg2> <arg3>\n", c);
		return (1);
	}
	return (0);
}

int	check_result(int i)
{
	if (i == -1)
	{
		perror("Erreur lors de l'exécution de la commande");
		return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int avoid_first_line(char *y)
{
	int length;
	int i;

	i = ft_strlen(y);
	length = i + 3;
	return (length);
}

void calculate_distance(char *map, char *y)
{
	int		i;
	int		o;
	int		avoid;

	i = 0;
	o = 0;
	avoid = avoid_first_line(y);
	printf("char to avoid: %d\n", avoid);
	while(map[i])
	{
		if (i > avoid)
		{
			
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		result;
	char	command[256];
	int		fd;
	int		sz;
	char	*c;

	if (check_argc(argc, argv[0]) == 1)
		return (1);
	snprintf(command, sizeof(command), "perl map.pl %s %s %s > map",
		argv[1], argv[2], argv[3]);
	result = system(command);
	if (check_result(result) == 1)
		return (1);
	c = (char *)malloc(MAXBUFLEN * sizeof(char));
	fd = open ("map", O_RDONLY);
	if (fd < 0)
	{
		perror("r1");
		exit(1);
	}
	sz = read(fd, c, MAXBUFLEN);
	c[sz] = '\0';
	calculate_distance(c, argv[2]);
	return (0);
}
