/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:41:59 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 11:37:19 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_error(char *file_name)
{
	write(2, "ft_tail: cannot open ", 21);
	write(2, file_name, strlen(file_name));
	write(2, " for reading: ", 14);
	write(2, strerror(errno), strlen(strerror(errno)));
	write(2, "\n", 1);
}
