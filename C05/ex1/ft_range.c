/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 14:21:50 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/09 15:30:46 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (!p)
		return (NULL);
	if (p == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}

/*#include <stdio.h>*/

/*int main()
{
	int *p;
	int i;

	i = 0;
	p = ft_range(0, 20);
	while (i < 20)
	{
		printf("%d ", p[i]);
		i++;
	}
	free (p);
}*/