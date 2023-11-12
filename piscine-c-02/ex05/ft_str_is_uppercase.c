/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:04:38 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/07 09:25:56 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Table ascii: A = 65 , Z = 90

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int) str[i];
		if (ascii_value < 65 || ascii_value > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
