/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:10:20 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/05 15:25:07 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_one_line(int x, int y, int i, int j)
{
	if ((i != 0) && (i != (y - 1)) && (j != 0 && j != (x - 1)))
	{
		ft_putchar(' ');
	}
	else if ((i == 0) && (j == 0))
	{
		ft_putchar('/');
	}
	else if ((i == (y - 1)) && (j == (x - 1)) && (y != 1) && (x != 1))
	{
		ft_putchar('/');
	}
	else if ((i == 0 && j == (x - 1)) || (i == (y - 1) && j == 0))
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_one_line(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
