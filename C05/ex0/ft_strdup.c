/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:56:48 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/11 14:15:47 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	if (src == NULL)
		return (NULL);
	i = 0;
	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = ft_strdup("Hello");
	str2 = ft_strdup("");
	str3 = ft_strdup("42");
	str4 = ft_strdup(NULL);

	printf("str 1 = %s\n", str1);
	printf("str 2 = %s\n", str2);
	printf("str 3 = %s\n", str3);
	printf("str 4 = %s\n", str4);

	free(str1);
	free(str2);
	free(str3);
	free(str4);
	return (0);
}*/