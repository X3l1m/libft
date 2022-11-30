/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/25 18:41:30 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/26 17:38:59 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*rem;

	if (!s1 | !set)
		return (0);
	while (ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	rem = ft_substr(s1, 0, i + 1);
	return (rem);
}

/* int main()
{
	//char *s1 = "hello";
	void	*s1 = "hell";
	char *set = 0;
	printf ("%s\n", ft_strtrim(s1, set));
} */