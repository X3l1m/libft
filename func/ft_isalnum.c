/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/29 18:28:30 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/26 20:17:44 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) | (c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
