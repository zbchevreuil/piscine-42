/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:03:48 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/11 19:16:59 by acayrol          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	longueur;

	i = 0;
	longueur = ft_strlen(dest);
	while (i < nb && src[i])
	{
		dest[longueur + i] = src[i];
		i++;
	}
	dest[longueur + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100] = "On va tester  ca";
	char test[100] = "Et on va re tester ca";
	char *s2;

	s2 = " avec quelque chose de plus grand";
	printf("s1 est '%s'\n", s1);
	printf("s2 est '%s'\n", s2);
	ft_strncat(s1, s2, 34);
	printf("%s\n", s1);
	printf("Comparons avec strcat :\n");
	ft_strncat(test, s2, 34);
	printf("%s\n", test);
	printf("Les resultats sont ils identiques ? %i ", strcmp(test, s1));
}*/