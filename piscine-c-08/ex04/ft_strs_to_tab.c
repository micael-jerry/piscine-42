/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:37:50 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/20 17:17:48 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * ft_strlen(str) + sizeof('\0'));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	create_stock_str(int size, char *str, char *copy)
{
	t_stock_str	temp;

	temp.size = size;
	temp.str = str;
	temp.copy = copy;
	return (temp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*result;

	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i] = create_stock_str(ft_strlen(av[i]), av[i], ft_strdup(av[i]));
		i++;
	}
	result[i] = create_stock_str(0, 0, 0);
	return (result);
}

/*
int	main(void)
{
	char		str_1[] = "test1";
	char		str_2[] = "test2";
	char		str_3[] = "test3";
	char		*strs[3];
	t_stock_str	*res;

	strs[0] = str_1;
	strs[1] = str_2;
	strs[2] = str_3;
	res = ft_strs_to_tab(3, strs);
	free(res);
	return (0);
}
*/
