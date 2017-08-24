/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:40:54 by asantos           #+#    #+#             */
/*   Updated: 2017/08/24 18:52:26 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (ft_check(str[i]) == 1)
			i++;
		else
			return (0);
	}
	return (1);
}
