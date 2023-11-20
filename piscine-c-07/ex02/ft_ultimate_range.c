/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:52:24 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/18 12:18:26 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	
		*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	result = (int *) malloc(sizeof(int) * (max - min) + sizeof('\0'));
	if (result == NULL)
		return (-1);
	while ((i + min) < max)
	{
		result[i] = i + min;
		i++;
	}
	result[i] = '\0';
	*range = result;
	return (max - min);
}
