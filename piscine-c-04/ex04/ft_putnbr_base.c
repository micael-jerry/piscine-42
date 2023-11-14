/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:01:36 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/14 09:15:49 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_write_base_nb(int nbr, char *base, int size)
{
	char			a;
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
	{
		n = nbr;
	}
	if (n >= (unsigned int) size)
	{
		ft_write_base_nb(n / size, base, size);
	}
	a = base[n % size];
	ft_putchar(a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (check_base(base) == 1)
	{
		base_size = ft_strlen(base);
		ft_write_base_nb(nbr, base, base_size);
	}
}

/*
int	main(void)
{
	int n = 10;
	char decimal[] = "0123456789";
	char binaire[] = "01";
	char hexadecimal[] = "0123456789ABCDEF";
	char ocatal[] = "poneyvif";
	ft_putnbr_base(n, decimal);
}
*/
