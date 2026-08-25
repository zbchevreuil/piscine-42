/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:33:16 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/07 10:59:22 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>*/

/*int main(void)
{
	char *str1 = "Hello";
	char *str2 = "hello";
	char *str3 = " ";
	char *str4 = "Hello\nWord";
	char *str5 = "Hello !";
	int result1 = ft_str_is_printable(str1);
	int result2 = ft_str_is_printable(str2);
	int result3 = ft_str_is_printable(str3);
	int result4 = ft_str_is_printable(str4);
	int result5 = ft_str_is_printable(str5);
	printf("Result is ; %d\n", result1);
	printf("Result is ; %d\n", result2);
	printf("Result is ; %d\n", result3);
	printf("Result is ; %d\n", result4);
	printf("Result is ; %d\n", result5);
	return 0;
}*/
