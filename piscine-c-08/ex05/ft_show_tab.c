/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:20:45 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/20 12:41:20 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
	{
		n = nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_stock_str(t_stock_str stock)
{
	ft_putstr(stock.str);
	ft_putchar('\n');
	ft_putnbr(stock.size);
	ft_putchar('\n');
	ft_putstr(stock.copy);
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_show_stock_str(par[i]);
		i++;
	}
}

/*
int	main(void)
{
	char		str_1[] = "test1";
	char		str_2[] = "test2";
	char		str_3[] = "test3";
	char		*strs[3];
	t_stock_str	*res;

	strs[0] = str_1;
	strs[1] = str_2;
	strs[2] = str_3;
	res = ft_strs_to_tab(3, strs);
	ft_show_tab(res);
	free(res);
	return (0);
}*/
