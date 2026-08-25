/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 15:31:06 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/09 18:12:13 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

/*#include <stdio.h>*/

/*int main()
{
	int *p;
	int i;
	int size;

	size = ft_ultimate_range(&p, 0, 20);
	printf("%d\n", size);

	i = 0;
	while (i < size)
	{
		printf("%d ", p[i]);
		i++;
	}
	free(p);
}*/