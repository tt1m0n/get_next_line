/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:06:46 by omakovsk          #+#    #+#             */
/*   Updated: 2017/11/13 17:19:20 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1
#include <fcntl.h>
# include "libft/libft.h"

typedef struct		s_lst
{
	char			*str;
	int				fd;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
