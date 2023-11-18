/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:56:28 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/18 12:10:42 by mfidimal         ###   ########.fr       */
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
unsigned int	ft_is_prime_recurcive(int nb, int i)
{
	if (i == 1)
		return (1);
	if (nb % i == 0)
		return (0);
	return (ft_is_prime_recurcive(nb, i - 1));
}
*/
/*
int	ft_is_prime_rec(int nb)
{
	unsigned int	res;

	if (nb < 2)
		return (0);
	res = ft_is_prime_recurcive((unsigned int) nb, (unsigned int) nb / 2);
	return ((int) res);
}
*/
/*
#include <stdio.h>
int	main(void)
{
	int	nb = 2147483620; //2147483629;
	int	res = ft_is_prime(nb);
	printf("%d\n", res);
	return (0);
}
*/
