/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:37:51 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/13 17:46:50 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result_tab;

	i = 0;
	result_tab = (int *)malloc(sizeof(int) * length);
	if (result_tab == NULL)
		return (NULL);
	while (i < length)
	{
		result_tab[i] = f(tab[i]);
		i++;
	}
	return (result_tab);
}

/*int	double_number(int n)
{
	return (n * 2);
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length = 5;
	int	*result;
	int	i;

	result = ft_map(tab, length, &double_number);

	i = 0;
	while (i < length)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");

	free(result);
	return (0);
}*/