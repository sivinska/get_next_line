/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivinska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 19:00:42 by sivinska          #+#    #+#             */
/*   Updated: 2018/02/14 15:13:00 by sivinska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	if (argc || argv)
		;
	fd = open(argv[1], O_RDONLY);
	while ((i = get_next_line(42, &line)) && (i > 0))
	{
		printf("%s\n", line);
		free(line);
	}
	printf("retourne:%d\n", i);
	close(fd);
	return (0);
}
