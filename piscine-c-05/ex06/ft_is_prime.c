/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:56:28 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/14 17:06:03 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_divider(int nb, int i)
{
	if (nb <= 2)
	{
		return (0);
	}
	else if (nb % i == 0)
	{
		return (i);
	}
	else if ((i + 1) < nb)
	{
		return (find_divider(nb, i + 1));
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	res;

	res = find_divider(nb, 2);
	if (res == 0)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 88;
    int res = ft_is_prime(nb);
    printf("%d", res);
    return 0;
}
*/
