/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:54:07 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/14 17:03:22 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_sqrt(int nb, int i)
{
	if ((nb < 0) || ((i * i) > nb))
		return (0);
	if (nb == 1)
		return (1);
	else if ((i * i) == nb)
	{
		return (i);
	}
	return (find_sqrt(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	return (find_sqrt(nb, 0));
}

/*
#include <stdio.h>
int main(void)
{
    int nb = 4;
    int res = ft_sqrt(nb);
    printf("%d", res);
    return 0;
}
*/
