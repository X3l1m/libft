/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 19:41:18 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/26 22:37:26 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (!s)
		return (NULL);
	if ((unsigned)ft_strlen(s) <= start)
		return ("");
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
		ft_memcpy(cpy, s + start, len);
	*(char*)(cpy + len) = 0;
	return (cpy);
}

/* int main()
{
	//char s[] = "benim";
	//int start = 6;
	//int len = 4;
	printf("%s\n", ft_substr("", 1, 1));
} */