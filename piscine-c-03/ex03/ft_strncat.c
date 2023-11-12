/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:31:45 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/09 11:22:43 by mfidimal         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length_dest;

	i = 0;
	length_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		if (i == nb)
		{
			break ;
		}
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
    int n = 4;

    ft_strncat(dest, src, n);
    printf("res= %s \n", dest);
}
*/
