/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:35:39 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/06 19:12:08 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*include <stdio.h>*/

/*int main(void)
{
	char *str1 = "HelloWorld";
	char *str2 = "Hello123";
	char *str3 = "";

	int result1 = ft_str_is_alpha(str1);
	int result2 = ft_str_is_alpha(str2);
	int result3 = ft_str_is_alpha(str3);

	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2); 
	printf("Result for str3: %d\n", result3); 

	return 0;
}*/
