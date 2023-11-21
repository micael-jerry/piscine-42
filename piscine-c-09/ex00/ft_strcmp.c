/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:07:44 by mfidimal          #+#    #+#             */
/*   Updated: 2023/11/09 10:25:05 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
        char s1[] = "";
        char s2[] = "";

        int res_my_ft = ft_strcmp(s1, s2);
        int res_ft = strcmp(s1, s2);
        printf("s1: %s | s2: %s | res= %d \n", s1, s2, res_my_ft);
        printf("s1: %s | s2: %s | res= %d \n", s1, s2, res_ft);
}
*/
