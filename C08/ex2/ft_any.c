/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:50:36 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/13 17:44:56 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	c;

	c = 0;
	while (tab[c])
	{
		if (f(tab[c]))
			return (1);
		c++;
	}
	return (0);
}

/*#include <stdio.h>

int	has_a(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*tab[] = {"bonjour", "chat", "hello", 0};

	printf("%d\n", ft_any(tab, &has_a));
	return (0);
}*/