/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:57:02 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/07 11:05:47 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int) str[i];
		if (ascii_value >= 65 && ascii_value <= 90)
		{
			str[i] = (char) ascii_value + 32;
		}
		i++;
	}
	return (str);
}
