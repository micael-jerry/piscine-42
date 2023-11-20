/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:38:08 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/16 09:40:52 by mfidimal         ###   ########.fr       */
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

/*
#include <stdio.h>
int main(void)
{
    char *str = "test";
    char *cp = ft_strdup(str);
    printf("%s\n", cp);
    return 0;
}
*/
