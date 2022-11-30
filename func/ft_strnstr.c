/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 17:15:54 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/10 17:18:23 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	while (haystack[i] && len > i)
	{
		a = 0;
		while (haystack[i] == needle[a] && len > i)
		{
			if (needle[a + 1] == 0)
				return ((char *)haystack + i - a);
			a++;
			i++;
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "merhaba ne yapiyon";
	char b[]= "haba";
	printf("%s", ft_strnstr(a, b, 7));
} */