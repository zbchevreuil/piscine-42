/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 19:43:03 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/07 09:20:36 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>*/
/*int main(void)
{
	char *str1 = "hello";
	char *str2 = "Hello123";
	char *str3 = "";
	int result1 = ft_str_is_lowercase(str1);
	int result2 = ft_str_is_lowercase(str2);
	int result3 = ft_str_is_lowercase(str3);
	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2);
	printf("Result for str3: %d\n", result3);
	return 0;
}*/