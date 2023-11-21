/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:06:07 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/21 16:32:50 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i == (n - 1))
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	result_size(char *str, char *charset)
{
	int	acc;
	int	i;
	int	charset_len;

	acc = 1;
	i = 0;
	charset_len = ft_strlen(charset);
	while (str[i] != '\0')
	{
		if (ft_strncmp(charset, str[i], charset_len) == 0)
			acc++;
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;

	result = malloc((char *) * result_size(str, charset));
	if (result == NULL)
		return (NULL);

	return (result);
}
