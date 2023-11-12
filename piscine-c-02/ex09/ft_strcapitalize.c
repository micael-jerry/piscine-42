/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:03:01 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/08 08:15:51 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_charupcase(char *c)
{
	int	ascii_value;

	ascii_value = (int) *c;
	if (ascii_value >= 97 && ascii_value <= 122)
	{
		*c = (char) ascii_value - 32;
	}
}

char	*ft_strlowcase(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int)str[i];
		if (ascii_value >= 65 && ascii_value <= 90)
		{
			str[i] = (char)ascii_value + 32;
		}
		i++;
	}
	return (str);
}

int	ft_char_is_alpha_numeric(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	ft_charupcase(&str[0]);
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_char_is_alpha_numeric(str[i - 1]) == 0)
		{
			ft_charupcase(&str[i]);
		}
		i++;
	}
	return (str);
}
