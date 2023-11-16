/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:56:28 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/16 15:45:17 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	nb_half;

	if (nb < 2)
		return (0);
	i = 2;
	nb_half = nb / 2;
	while (i <= nb_half)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 2147483647;
    int res = ft_is_prime(nb);
    printf("%d", res);
    return 0;
}
*/
