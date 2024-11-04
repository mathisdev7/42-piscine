/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:37:11 by mazeghou          #+#    #+#             */
/*   Updated: 2024/08/06 14:30:26 by aledupon         ###   ########.fr       */
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
	printf("%s", c);
	return (0);
}
