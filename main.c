/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 18:18:00 by mpaul             #+#    #+#             */
/*   Updated: 2016/09/04 05:01:44 by mpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_putchar(char c);

void	colle03(int x, int y);

int		main(void)
{
	colle03(5, 3);
	colle03(5, 1);
	colle03(1, 1);
	colle03(1, 5);
	colle03(4, 4);
	return (0);
}