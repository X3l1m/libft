/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 23:08:11 by seyildir      #+#    #+#                 */
/*   Updated: 2023/02/25 23:19:56 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcut(char *str, int point)
{
	char	*rtn;
	size_t	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str + point) + 1;
	rtn = malloc(len);
	if (!rtn)
		return (free(str), NULL);
	rtn = ft_memcpy(rtn, str + point, len);
	rtn[len - 1] = 0;
	return (free(str), rtn);
}
