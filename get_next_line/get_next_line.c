/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:46:24 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/18 19:38:12 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_to_save(int fd, char *save)
{
	char	*buffer;
	ssize_t	bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(save), NULL);
	bytes = 1;
	while (!ft_strchr(save, '\n') && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buffer);
			free(save);
			return (NULL);
		}
		buffer[bytes] = '\0';
		save = ft_strjoin(save, buffer);
		if (!save)
			return (free(buffer), NULL);
	}
	free(buffer);
	return (save);
}

static char	*extract_line(char *save)
{
	size_t	i;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		i++;
	return (ft_substr(save, 0, i));
}

static char	*trim_save(char *save)
{
	size_t	i;
	char	*rest;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	i++;
	rest = ft_substr(save, i, ft_strlen(save) - i);
	free(save);
	if (rest && rest[0] == '\0')
	{
		free(rest);
		return (NULL);
	}
	return (rest);
}

static char	*gnl_fail(char **save)
{
	free(*save);
	*save = NULL;
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (gnl_fail(&save));
	save = read_to_save(fd, save);
	if (!save)
		return (NULL);
	if (save[0] == '\0')
		return (gnl_fail(&save));
	line = extract_line(save);
	if (!line)
		return (gnl_fail(&save));
	save = trim_save(save);
	return (line);
}
