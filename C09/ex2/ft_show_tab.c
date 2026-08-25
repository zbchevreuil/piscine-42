/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:18:37 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/19 11:38:03 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

/*void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	struct s_stock_str	tab[4];

	tab[0].size = 5;
	tab[0].str = "Hello";
	tab[0].copy = "Hello";

	tab[1].size = 5;
	tab[1].str = "World";
	tab[1].copy = "World";

	tab[2].size = 7;
	tab[2].str = "42Paris";
	tab[2].copy = "42Paris";

	tab[3].str = 0;
	tab[3].size = 0;
	tab[3].copy = 0;

	ft_show_tab(tab);
	return (0);
}*/