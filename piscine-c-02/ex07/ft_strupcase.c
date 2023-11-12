/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:28:08 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/07 10:50:57 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int) str[i];
		if (ascii_value >= 97 && ascii_value <= 122)
		{
			str[i] = (char) ascii_value - 32;
		}
		i++;
	}
	return (str);
}
