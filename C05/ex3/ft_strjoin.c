/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 18:12:32 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/10 11:04:01 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

int	ft_copy(char *dest, char *src, int pos)
{
	int	i;

	i = 0;
	while (src[i])
		dest[pos++] = src[i++];
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		pos;

	if (size == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = malloc(ft_total_len(size, strs, sep) + 1);
	if (!result)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < size)
	{
		pos = ft_copy(result, strs[i], pos);
		if (++i < size)
			pos = ft_copy(result, sep, pos);
	}
	result[pos] = '\0';
	return (result);
}

/*#include <stdio.h>

int main(void)
{
	char 	*strs[] = {"Bonjour", "tu", "es", "qui"};
	char *result;

	result = ft_strjoin(4, strs, " ");
	printf("%s\n", result);
	free(result);
}*/