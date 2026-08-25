/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 14:12:26 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/08 14:30:49 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			hex[0] = "0123456789abcdef"[str[i] / 16];
			hex[1] = "0123456789abcdef"[str[i] % 16];
			hex[2] = '\0';
			write(1, hex, 2);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*int main(void)
{
	char *str1 = "Hello\nHow are you ?";
	ft_putstr_non_printable(str1);
	return 0;
}*/