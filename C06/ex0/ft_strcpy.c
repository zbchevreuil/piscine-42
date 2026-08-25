/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:47:52 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/12 11:50:05 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	char src[] = "C'est un test";
	char dest[100];

	printf("La string '%s' est de %i characters\n", src, ft_strlen(src));
	printf("Sources string is '%s'\n", src);
	printf("ft returns %s\n", ft_strcpy(dest, src));
	printf("Voila le resultat, %s\n", dest);
	return (0);
}*/
