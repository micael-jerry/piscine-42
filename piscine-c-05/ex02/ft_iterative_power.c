/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:47:09 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/14 16:53:43 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	result = 1;
	i = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 1;
    int power = 0;
    int res = ft_iterative_power(nb, power);
    printf("%d", res);
    return 0;
}
*/
