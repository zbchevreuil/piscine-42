/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:18:36 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/11 19:35:55 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[] = "L'héritier soupèse-t-il des ritournelles en bourlinguant ?";
	char	s2[] = "ritournelles";
	char	*result;

	result = ft_strstr(s1, s2);
	printf("%.*s\n", 12, result);
	return (0);
}*/