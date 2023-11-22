/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:06:07 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/22 14:00:43 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	result_size(char *str, char *charset)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 0 && is_sep(str[i + 1],
				charset) == 1)
			size++;
		i++;
	}
	return (size);
}

void	copy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	result_index;

	result_index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_sep(str[i + j], charset) == 0)
				j++;
			array[result_index] = (char *) malloc(sizeof(char) * (j + 1));
			copy(array[result_index], &str[i], charset);
			i += j;
			result_index++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		size;

	size = result_size(str, charset);
	result = (char **) malloc(sizeof(char *) * (size + 1));
	result[size] = 0;
	split(result, str, charset);
	return (result);
}

/*
int	main(void)
{
	char	str[] = "jerry - micael - fidimalala";
	char	charset[] = " - ";
	int		size;
	char	**result;
	int		i;

	size = result_size(str, charset);
	printf("size: %d\n", size);
	result = ft_split(str, charset);
	i = 0;
	while (i < size)
	{
		printf("i: %d - val: %s\n", i, result[i]);
		i++;
	}
	return (0);
}
*/
