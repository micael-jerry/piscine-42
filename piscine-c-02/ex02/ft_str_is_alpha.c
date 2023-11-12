/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:07:59 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/06 14:22:15 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((ascii_value < 65) || (ascii_value > 122))
		{
			return (0);
		}
		else if (ascii_value > 90 && ascii_value < 97)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
