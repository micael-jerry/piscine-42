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

int	ft_sqrt(int nb)
{
	unsigned int i;

	i = 1;
	if (nb < 0)
		return (0);
	while ((i * i) <= (unsigned int) nb)
	{
		if ((i * i) == (unsigned int) nb)
			return (i);
		i++;
	}
	return (0);
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
