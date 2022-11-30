/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 20:14:11 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/26 22:15:50 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') | (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int main()
{
	char c = '1';
 	printf("%d\n", isalpha(c));

	c = 'a';
	printf("%d\n", isalpha(c));

	c = '+';
	printf("%d\n", isalpha(c));

	printf("%d", ft_isalpha(6));
} */
