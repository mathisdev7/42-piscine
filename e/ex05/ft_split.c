/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:46:34 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/31 17:52:50 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}


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
	int start = 0;
	int end = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int charset_found = 0;
	while(str[i])
	{
		if (ft_is_separator(str, charset) && charset_found == 0)
		{
			end++;
			while (k != end)
			{
				result[j][k] = str[j][k];
			}
			j++;
		}
		i++;
	}
}

char **ft_split(char *str, char *charset)
{
	int count;

	count = count_substrings(str, charset);
	char **result = (char **)malloc((count + 1) * sizeof(char **));
	(result[0]) = "salut";
	(result[1]) = "cava";
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
