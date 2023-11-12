/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:36:02 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/10 14:07:28 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

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
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	to_find_len;
	unsigned int	i;

	to_find_len = ft_strlen(to_find);
	i = 0;
	while (str[i + (to_find_len - 1)] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, to_find_len) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main() {
    char    str[] = "avant jerry apres";
    char    to_find[] = "jerry";
    char    *res = ft_strstr(str, to_find);
    printf("res= %s \n", res);
}
*/
