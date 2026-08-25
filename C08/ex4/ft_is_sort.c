/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:26:28 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/13 18:24:28 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	if (asc || desc)
		return (1);
	return (0);
}

/*#include <stdio.h>

int	compare(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab1[3] = {3, 2, 1};
	int	tab2[3] = {1, 2, 3};
	int	tab3[3] = {1, 3, 2}
	int length = 3;

	printf("tab1 : %d\n", ft_is_sort(tab1, length, &compare));
	printf("tab2 : %d\n", ft_is_sort(tab2, length, &compare));
	printf("tab3 : %d\n", ft_is_sort(tab3, length, &compare));

	return (0);
}*/