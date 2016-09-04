/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 18:41:20 by mpaul             #+#    #+#             */
/*   Updated: 2016/09/04 17:31:09 by mpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putb(int x, char c)
{
	while ((x - 2) > 0)
	{
		ft_putchar(c);
		x--;
	}
}

void	ft_putb2(int x, int y)
{
	while ((y - 2) > 0)
	{
		ft_putchar('B');
		ft_putb(x, ' ');
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		y--;
	}
}

void	colle(int x, int y)
{
	if (x <= 0 || y <= 0)
		ft_putchar('\n');
	else
	{
		ft_putchar('A');
		ft_putb(x, 'B');
		if (x > 1)
			if (y > 1 || x > 1)
				ft_putchar('C');
		ft_putchar('\n');
		ft_putb2(x, y);
		if (x != 1 || y != 1)
		{
			if (y > 1)
			{
				ft_putchar('A');
				ft_putb(x, 'B');
				if (x > 1)
					ft_putchar('C');
				ft_putchar('\n');
			}
		}
	}
}
