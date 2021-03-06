/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 22:12:02 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/25 22:02:50 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#define BUFFER_SIZE 1
# include <stdlib.h>
# include <unistd.h>

int fd;
char	*ft_join(char *string1, char *string2);
int		ft_free(char **stk);
char	*ft_sub(char *string);
char	*ft_from_newline(char *string);
int		ft_search(char *source);
size_t	ft_strlen(char *str);
int		get_next_line(char **line);

#endif
