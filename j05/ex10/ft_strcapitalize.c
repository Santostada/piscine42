/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:16:52 by asantos           #+#    #+#             */
/*   Updated: 2017/08/24 18:29:09 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check(str[i] == 0))
			i++;
		if (((ft_check(str[i - 1]) == 0) || i == 0) && ft_check(str[i]) >= 1)
		{
			if (ft_check(str[i]) == 1)
				i++;
			if (ft_check(str[i]) == 2 || i == 0)
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
