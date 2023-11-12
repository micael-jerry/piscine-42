/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:24:56 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/08 08:00:25 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int) str[i];
		if (ascii_value < 48 || ascii_value > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
