/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:04:00 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/08 15:03:03 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	if (*str < 'a' || *str > 'z')
		return (0);
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	if (*str < 'A' || *str > 'Z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i])
	{
		if (ft_str_is_alphanumeric(str[i]))
		{
			if (capitalize)
			{
				if (ft_str_is_lowercase(str + i))
					str[i] -= 32;
				capitalize = 0;
			}
			else if (ft_str_is_uppercase(str + i))
				str[i] += 32;
		}
		else
			capitalize = 1;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char str1[] = "hello, how are yOu doing? 42words forty-two; fifty+and+one";
	printf("%s\n", ft_strcapitalize(str1));
	return 0;
}*/