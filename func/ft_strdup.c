/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 17:43:58 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/23 18:32:47 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s1) + 1;
	cpy = malloc(len);
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s1, len);
	return (cpy);
}

/* int main()
{
	char *source;
	source = malloc(sizeof(char *) * 4);
	source[0] = '1';
	source[1] = '3';
	source[2] = '2';
	source[3] = '\0';
	char *target = ft_strdup(source);
	// printf("%s\n", source);
	// printf("%s\n", target);
	// printf("%p\n%p\n", source, target);
	int i =0;
	while(target[i])
	{
		printf("%c",target[i]);
		i++;
	}
} */