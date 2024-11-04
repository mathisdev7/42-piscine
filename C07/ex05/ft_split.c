/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:46:34 by mazeghou          #+#    #+#             */
/*   Updated: 2024/08/01 18:19:27 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_is_separator(char c, char *charset)
{
	int i = 0;
	while(charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int count_substrings(char *str, char *charset)
{
    int i = 0;
    int count = 0;
    int in_substring = 0;
    
    while (str[i])
    {
        if (!ft_is_separator(str[i], charset) && !in_substring)
        {
            count++;
            in_substring = 1;
        }
        else if (ft_is_separator(str[i], charset))
        {
            in_substring = 0;
        }
        i++;
    }
    return count; 
}

char **ft_copy(char *str, char *charset, char **result)
{
	int i = 0;
	int current_pos = 0;
	int j = 0;
	int k = 0;
	while(str[i])
	{
	if (!ft_is_separator(str[i], charset))
	{
		result[current_pos] = malloc(50000);
		result[current_pos][k] = str[j];
		printf("str: %s\n", result[current_pos]);
		j++;
		k++;
	}
	else
	{
		current_pos++;
		k = 0;
	}
	i++;
	}
	printf("%s", result[0]);
	return (result);
}

char **ft_split(char *str, char *charset)
{
	int count;

	count = count_substrings(str, charset);
	char **result = (char **)malloc(count + 1);
	ft_copy(str, charset, result);
	return (result);
}

int		main(void)
{
	char **tab;
    char str[] = "salut-cava";
    char charset[] = "-";
	tab = ft_split(str, charset);
	printf("%s", tab[0]);
}
