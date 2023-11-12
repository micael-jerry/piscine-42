/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:24:34 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/04 16:29:03 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_one(char a, char b, char c)
{
	char	comb[3];

	comb[0] = a;
	comb[1] = b;
	comb[2] = c;
	write(1, &comb, 3);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_comb_one(a, b, c);
				if (a != '7')
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
