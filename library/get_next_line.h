/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:16:00 by antonga           #+#    #+#             */
/*   Updated: 2018/06/26 10:08:01 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "libft/libft.h"

int	get_next_line(const int fd, char**line);

#endif
