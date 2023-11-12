/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:59:31 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/07 10:04:54 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Printable caracter 32 >= c <= 127

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			continue ;
		}
		ascii_value = (int) str[i];
		if (ascii_value < 32 || ascii_value > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
