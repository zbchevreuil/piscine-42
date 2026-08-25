/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:25:53 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 11:40:03 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_read_file(int fd, char *buf, int bytes)
{
	int	i;
	int	ret;

	i = 0;
	ret = read(fd, buf + (i % bytes), 1);
	while (ret > 0)
	{
		i++;
		ret = read(fd, buf + (i % bytes), 1);
	}
	return (i);
}

void	ft_write_buf(char *buf, int size, int pos)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &buf[pos], 1);
		pos = (pos + 1) % size;
		i++;
	}
}

void	ft_prepare_buf(int *size, int bytes, int *pos)
{
	if (*size > bytes)
	{
		*pos = *size % bytes;
		*size = bytes;
	}
	else
		*pos = 0;
}
