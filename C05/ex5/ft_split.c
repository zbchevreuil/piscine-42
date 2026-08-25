/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:55:33 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/11 11:29:35 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	is_character(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_len(char *str, char *charset)
{
	int	i;
	int	len;

	len = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] && !is_character(str[i], charset))
			++len;
		while (str[i] && !is_character(str[i], charset))
			++i;
	}
	return (len);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = -1;
	while (str[++i] && !is_character(str[i], charset))
		++len;
	return (len);
}

int	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;
	int	len;

	len = 0;
	while (src[len])
		++len;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		len;
	int		i;
	int		j;

	strs = (char **)malloc(sizeof(char *) * (ft_len(str, charset) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < ft_len(str, charset))
	{
		while (str[i] && is_character(str[i], charset))
			++i;
		len = ft_word_len(str + i, charset);
		strs[j] = (char *)malloc(sizeof(char) * len + 1);
		if (!strs[j])
			return (NULL);
		ft_strlcpy(strs[j++], str + i, len + 1);
		i += len;
	}
	strs[j] = NULL;
	return (strs);
}

/*#include <stdio.h>

char **ft_split(char *str, char *charset);
int	count_substrs(char *str, char *charset);

int main(int argc, char **argv)
{
	char **substrs;

	if (argc == 3)
	{
		substrs = ft_split(argv[1], argv[2]);
		if (!substrs)
			return (1);
		while (*substrs)
		{
			printf("%s\n", *substrs);
			substrs++;
		}
	}
	else
		return (1);
}*/