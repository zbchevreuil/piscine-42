/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:48:26 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 16:44:50 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>

int		ft_file_size(char *file_name);
char	*ft_copy_input(char *file_name, int size);
char	*ft_read_stdin(int *size);
char	*ft_append(char *str, char *buffer, int *size, int len);
void	ft_hexdump(char *str, int size);
void	ft_print_address(int n);
void	ft_print_hex(char c);
void	ft_print_ascii(char c);
void	ft_print_hex_line(char *str, int j, int size);
void	ft_print_ascii_line(char *str, int j, int size);
void	ft_error(char *file_name);
void	ft_handle_stdin(void);
void	ft_print_stdin_line(char *buffer, int size, int address);

#endif