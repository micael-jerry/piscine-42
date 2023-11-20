/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:45:06 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/16 14:40:08 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strjoin_len(int size, char **strs, char *sep)
{
	int	i;
	int	acc;
	int	sep_len;

	i = 0;
	acc = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		acc = acc + ft_strlen(strs[i]);
		if (i < (size - 1))
		{
			acc = acc + sep_len;
		}
		i++;
	}
	return (acc);
}

char	*memory_allocation_strjoin(int size, char **strs, char *sep)
{
	char	*m;

	m = malloc(sizeof(char) * ft_strjoin_len(size, strs, sep)
			+ sizeof('\0'));
	return (m);
}

void	ft_cp_str_or_sep(char *result, int *result_index, char *str_or_sep)
{
	int	i;

	i = 0;
	while (str_or_sep[i] != '\0')
	{
		result[*result_index] = str_or_sep[i];
		*result_index = *result_index + 1;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	result_index;
	char	
		*result;

	result = NULL;
	if (size < 1)
		return (result);
	i = 0;
	result_index = 0;
	result = memory_allocation_strjoin(size, strs, sep);
	while (i < size)
	{
		ft_cp_str_or_sep(result, &result_index, strs[i]);
		if (i < (size - 1))
			ft_cp_str_or_sep(result, &result_index, sep);
		i++;
	}
	result[result_index] = '\0';
	return (result);
}

/*
int main()
{
    char str_1[] = "test1";
    char str_2[] = "test2";
    char str_3[] = "test3";
    char sep[] = "*";
    char *strs[3];

    strs[0] = str_1;
    strs[1] = str_2;
    strs[2] = str_3;

    char *res = ft_strjoin(3, strs, sep);
    printf("result: %s", res);
    free(res);
    return (0);
}
*/
