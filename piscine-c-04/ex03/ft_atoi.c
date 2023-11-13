/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:50:12 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/13 09:31:39 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	find_end_index_int(int start_index_int, char *str)
{
	int	i;

	i = start_index_int + 1;
	while (str[i] != '\0')
	{
		if (ft_char_is_numeric(str[i]) == 0)
		{
			break ;
		}
		i++;
	}
	return (i - 1);
}

int	str_to_int(int start_index_int, int end_index_int, char *str)
{
	int	i;
	int	acc;

	i = start_index_int;
	acc = 0;
	while (i <= end_index_int)
	{
		acc = acc + (str[i] - '0');
		if (i < end_index_int)
		{
			acc = acc * 10;
		}
		i++;
	}
	return (acc);
}

int	sign(int start_index_int, char *str)
{
	int	i;
	int	negatif;

	i = start_index_int - 1;
	negatif = 0;
	while (i >= 0)
	{
		if (str[i] != ' ' && str[i] != '+' && str[i] != '-')
		{
			break ;
		}
		if (str[i] == '-')
		{
			negatif++;
		}
		i--;
	}
	if (negatif % 2 == 0)
	{
		return (1);
	}
	return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	start_index_int;
	int	end_index_int;
	int	result;

	i = 0;
	while (1)
	{
		if (ft_char_is_numeric(str[i]) == 1)
		{
			start_index_int = i;
			break ;
		}
		else if (ft_char_is_numeric(str[i]) == 0)
		{
			if (str[i] != ' ' && str[i] != '+' && str[i] != '-')
			{
				return (0);
			}
		}
		i++;
	}
	end_index_int = find_end_index_int(start_index_int, str);
	result = str_to_int(start_index_int, end_index_int, str);
	return (result * sign(start_index_int, str));
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	//char str[] = " ---+--+1234ab567";
	int	res_ft_atoi = ft_atoi(argv[1]);
	printf("ft_atoi = %d\n", res_ft_atoi);
	return (0);
}
*/
