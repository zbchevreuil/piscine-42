/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 10:31:41 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/11 17:02:24 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	the_ifs(int x, int y, int l, int c)
{
	if ((l == 0 && c == 0) || (l == y - 1 && c == x - 1))
		ft_putchar('/');
	if ((c == 0 && l == y - 1) || (l == 0 && c == x - 1))
		ft_putchar('\\');
	if ((c == 0 || c == x - 1) && (l != 0 && l != y - 1))
		ft_putchar('*');
	if ((l == 0 || l == y - 1) && (c > 0 && c < x - 1))
		ft_putchar('*');
	if ((c > 0 && c < x - 1) && (l > 0 && l < y - 1))
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	c;
	int	l;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if (x == 1 && y == 1)
			{
				ft_putchar('/');
				ft_putchar('\n');
				return ;
			}
			the_ifs(x, y, l, c);
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
