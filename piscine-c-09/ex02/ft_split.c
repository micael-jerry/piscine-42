/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:06:07 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/21 17:29:08 by mfidimal         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int	i;
	char
		*copy;

	i = 0;
	copy = malloc(sizeof(char) * ft_strlen(src) + sizeof('\0'));
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*temp;
	int	i;
	int	result_index;
	int	charset_len;
	int	temp_index;
	int	is_copy;

	result = (char *) malloc(sizeof(char) * result_size(str, charset));
	temp = malloc(sizeof(char) * strlen(str) + sizeof('\0'));
	if (result == NULL || temp == NULL)
		return (NULL);
	i = 0;
	result_index = 0;
	charset_len = ft_strlen(charset);
	temp_index = 0;
	is_copy = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(charset, str[i], charset_len) == 0)
		{
			temp[temp_index] = '\0';
			i = i + (charset_len - 1);
			temp_index = 0;
			is_copy = 1;
		}
		else
		{
			temp[temp_index] = str[i];
			temp_index++;
			i++;
		}
		if (is_copy)
		{
			result[result_index] = ft_strdup(temp);
			is_copy = 0;
			result_index++;
		}
	}
	return (result);
}
