/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:52:21 by mpaul             #+#    #+#             */
/*   Updated: 2016/09/22 10:56:51 by mpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		e;
	int		f;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			e = 0;
			f = 0;
			while (j < i)
				if (argv[1][i] == argv[1][j++])
					e = 1;
			if (e == 0)
				ft_putchar(argv[1][i]);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			j = 0;
			e = 0;
			f = 0;
			while (argv[1][j] != '\0')
				if (argv[1][j++] == argv[2][i])
					f = 1;
			j = 0;
			while (j < i)
				if (argv[2][i] == argv[2][j++])
					e = 1;
			if (e == 0 && f == 0)
				ft_putchar(argv[2][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
