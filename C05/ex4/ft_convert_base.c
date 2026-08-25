/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:13:39 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/11 11:21:37 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

long	base_to_long(char *str, char *base);
void	long_to_base(long nbr, char *base, char *str, int index);

int	is_base_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ' || (str[i] >= 9
				&& str[i] <= 13))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nbr_long;
	char	*result;

	result = malloc(34 * sizeof(char));
	if (is_base_valid(base_from) == 0 || is_base_valid(base_to) == 0)
	{
		free(result);
		return (NULL);
	}
	nbr_long = base_to_long(nbr, base_from);
	if (nbr_long < -2147483648 || nbr_long > 2147483647)
	{
		free(result);
		return (NULL);
	}
	long_to_base(nbr_long, base_to, result, 0);
	return (result);
}

/*#include <stdio.h>

int main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("42", "0123456789", "0123456789abcdef"));
}*/