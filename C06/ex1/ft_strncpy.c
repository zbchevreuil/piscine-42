/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:35:57 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/12 12:30:39 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	int i;
	char dest[] = "Coucou je fais des tests";
	char src[] = "Reussis";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 25), dest);
	i = 7;
	while (i < 24)
	{
		if (dest[i])
		{
			printf("Fail, got %c, %x) pos %d\n", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}*/