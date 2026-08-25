/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 13:32:45 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/22 13:45:27 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *file_name)
{
	int		reading;
	int		file;
	char	buffer;

	file = open(file_name, 0);
	if (file == -1)
		return (0);
	reading = read(file, &buffer, 1);
	while (reading > 0)
	{
		write(1, &buffer, 1);
		reading = read(file, &buffer, 1);
	}
	if (reading == -1)
	{
		close(file);
		return (0);
	}
	close(file);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!(ft_display_file(argv[1])))
			write(2, "Cannot read file.\n", 18);
	}
	else
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
	}
}
