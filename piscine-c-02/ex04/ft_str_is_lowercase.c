/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:37:18 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/07 09:23:08 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Table ascii: a = 97 , z = 122

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int) str[i];
		if (ascii_value < 97 || ascii_value > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
