/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 18:41:20 by mpaul             #+#    #+#             */
/*   Updated: 2016/09/04 05:04:43 by mpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	colle03(int x, int y)
{
	int i;
	int j;

	j = y;
	i = x;
	ft_putchar('A');
	if ( i > 1)
		while ((x - 2 ) > 0)
			{
				ft_putchar('B');
				x--;
			}
	x = i;
	if ( i > 1 )
		ft_putchar('C');
	ft_putchar('\n');
	while ((y - 2) > 0)
	{
		ft_putchar('B');
		while ((x - 2) > 0)
		{
			ft_putchar(' ');
			x--;
		}
		x = i;
		if ( i > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		y--;
	}
	y = j;
	if ( y > 1 )
	{
		ft_putchar('A');
		while ((x - 2 ) > 0 )
		{
			ft_putchar('B');
			x--;
		}
		if ( i > 1 )
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}
