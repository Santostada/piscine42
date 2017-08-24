/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 12:33:47 by asantos           #+#    #+#             */
/*   Updated: 2017/08/24 19:06:28 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}
	while (src[p] != '\0' && p <= (nb - 1))
	{
		dest[i] = src[p];
		p++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
