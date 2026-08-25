/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:42:19 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 11:31:33 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		ft_file_size(char *file_name);
int		ft_read_file(int fd, char *buf, int bytes);
void	ft_write_buf(char *buf, int size, int pos);
void	ft_prepare_buf(int *size, int bytes, int *pos);
void	ft_display(char *file_name, int size, int bytes);
void	ft_print_header(int i, char *file_name);
void	ft_error(char *file_name);

#endif