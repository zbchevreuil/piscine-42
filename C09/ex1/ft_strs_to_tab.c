/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 12:24:34 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/18 16:46:32 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
	{
		return (NULL);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*res;

	i = 0;
	res = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!res)
	{
		return (0);
	}
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}

/*#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	tab = ft_strs_to_tab(ac - 1, av + 1);
	if (!tab)
		return (1);

	i = 0;
	while (i < ac - 1)
	{
		printf("size : %d\n", tab[i].size);
		printf("str  : %s\n", tab[i].str);
		printf("copy : %s\n", tab[i].copy);
		printf("----------------\n");
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}*/