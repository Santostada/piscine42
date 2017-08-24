/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:44:55 by asantos           #+#    #+#             */
/*   Updated: 2017/08/10 20:28:29 by asantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int hour2;
	int h1c;
	int h2c;

	if (hour == 24)
		hour = 0;
	hour2 = ((hour + 1) == 24 ? 0 : (hour + 1));
	if (hour >= 12)
	{
		hour = hour - 12;
		h1c = 1;
	}
	if (hour2 >= 12)
	{
		hour2 = hour2 - 12;
		h2c = 1;
	}
	hour = (hour == 0 ? 12 : hour);
	hour2 = (hour2 == 0 ? 12 : hour2);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s. AND %d.00 %s.\n", hour,
		(h1c == 0 ? "A.M" : "P.M"), hour2, (h2c == 0 ? "A.M" : "P.M");

