/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:30:42 by ricosta-          #+#    #+#             */
/*   Updated: 2023/04/22 19:53:31 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <stdlib.h>
# include <limits.h>

# include "libft.h"

//unistd & stdio for read, fcntl & sys/stat for open;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

char	*get_next_line(int fd);

char	*ft_strjoin(char *line, char *buff);

int		ft_strlen(char *s);

int		ft_check(char *buf);

#endif
