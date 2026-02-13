/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:37:35 by dsousa-o          #+#    #+#             */
/*   Updated: 2026/02/13 15:25:22 by dsousa-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char *get_next_line(int fd)
{
	static char *save;
	char *line;
	char buffer[BUFFER_SIZE + 1];
	int i;
	ssize_t bytes;

	if(fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
	bytes = 1;

	while (!ft_strchr(save, '\n') && bytes > 0){

		bytes = read(fd, buffer, BUFFER_SIZE);
		
		if (bytes > 0)
		{
			buffer[bytes] = '\0';
			save = ft_strjoin(save,buffer);
		}
	}
	if (save == NULL || save[0] == '\0')
		return(NULL);
	
	i = 0;
		
	while(save[i] != '\n' && save[i] != '\0')
		i++;
	
	i = 0;
	
}

int main(void)
{
    int fd = open("archivo.txt", O_RDONLY);
    char *line;

    if (fd < 0)
        return (1);

    line = get_next_line(fd);
    while (line)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
    }

    close(fd);
    return (0);
}