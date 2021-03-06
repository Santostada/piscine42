/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:49:34 by asantos           #+#    #+#             */
/*   Updated: 2017/08/22 22:01:27 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i + 1] == s2[i + 1])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
	}
	return (s1[i - 1] - s2[i - 2]);
}
