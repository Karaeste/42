/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:43:44 by mpaul             #+#    #+#             */
/*   Updated: 2016/09/08 20:08:15 by mpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 0)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		if (hour == 12)
			printf("12.00 P.M. AND 1.00 P.M.\n");
		if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		if (hour > 0 && hour < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
		if (hour > 12 && hour < 23)
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	}
}

int		main(void)
{
	int		c;

	c = 0;
	while (c >= 0 && c <= 23)
	{
		ft_takes_place(c);
		c++;
	}
}
