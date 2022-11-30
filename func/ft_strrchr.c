/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 16:18:42 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/10 16:47:40 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*save;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			save = (char *)s + i;
	i++;
	}
	return (save);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "denemne";
	int b = 'n';
	printf("%s", ft_strrchr(a, b));
} */