/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:24:48 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/09 10:26:42 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
#include <string.h>
int main()
{
        char s1[] = "jerry";
        char s2[] = "jerry";
        int n = 7;

        int res_my_ft = ft_strncmp(s1, s2, n);
        int res_ft = strncmp(s1, s2, n);
        printf("s1: %s | s2: %s | res= %d \n", s1, s2, res_my_ft);
        printf("s1: %s | s2: %s | res= %d \n", s1, s2, res_ft);
}
*/
