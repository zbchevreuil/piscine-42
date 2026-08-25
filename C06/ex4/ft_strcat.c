/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:49:16 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/11 19:02:30 by acayrol          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	longueur;

	i = 0;
	longueur = ft_strlen(dest);
	while (src[i])
	{
		dest[longueur + i] = src[i];
		i++;
	}
	dest[longueur + i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	char s1[100] = "On va tester  ca";
	char test[100] = "Et on va re tester ca";
	char *s2;

	s2 = "that";
	printf("s1 est '%s'\n", s1);
	printf("s2 est '%s'\n", s2);
	ft_strcat(test, s2);
	printf("%s\n", s1);
	printf("%s\n", test);
}*/