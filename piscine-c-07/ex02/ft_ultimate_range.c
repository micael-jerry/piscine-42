/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:52:24 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/16 14:43:23 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	result = NULL;
	if (min >= max)
	{
		return (-1);
	}
	i = 0;
	result = malloc(sizeof(int) * (max - min) + sizeof('\0'));
	while ((i + min) < max)
	{
		result[i] = i + min;
		i++;
	}
	result[i] = '\0';
	return (result);
}
