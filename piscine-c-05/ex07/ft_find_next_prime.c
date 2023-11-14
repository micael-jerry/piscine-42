/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:59:43 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/14 11:03:10 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int find_divider(int nb, int i)
{
	if (nb <= 1)
	{
		return (-1);
	}
	else if (nb % i == 0)
	{
		return (i);
	}
	else if (i <= (nb / 2))
	{
		return (find_divider(nb, i + 1));
	}
	return (0);
}

int ft_is_prime(int nb)
{
	int res;

	res = find_divider(nb, 2);
	if (res == 0)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 90;
    int res = ft_find_next_prime(nb);
    printf("%d", res);
    return 0;
}
*/
