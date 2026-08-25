/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:49:26 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/08 09:51:20 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <stdio.h>
int main(void)
{
	char *str1 = "Hello, World!";
	int length = ft_strlen(str1);
	printf("Length of str1: %d\n", length);
	char *str2 = "";
	length = ft_strlen(str2);
	printf("Length of str2: %d\n", length);
	return 0;
}*/