/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:43:18 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/09 10:28:17 by mfidimal         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	length_dest;

	i = 0;
	length_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
        char dest[] = "jerry";
        char src[] = "jerry";

        ft_strcat(dest, src);
        printf("res= %s \n", dest);
}
*/
