/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:59:43 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/16 16:06:04 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	nb_half;

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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 2147483629;
    int res = ft_find_next_prime(nb);
    printf("%d", res);
    return 0;
}
*/
