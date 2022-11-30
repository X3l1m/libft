/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 22:47:03 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/25 15:41:25 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char *s1, const char *set)
{
	int	g;

	g = 0;
	while (s1[g] == set[g])
	{
		g++;
		if (set[g] == 0)
			return(1);
	}
	return (0);
}

char *ft_strdel(char const *s1, char const *set)
{
	char	*trim;
	char	once;
	size_t	i;
	size_t	a;
	
	once = 0;
	i = 0;
	a = 0;
	trim = malloc(ft_strlen(s1));
	if(!trim)
		return (NULL);
	while (s1[i])
	{
		if (s1[i] == set[0] && once == 0)
		{
			if(check(s1 + i, set))
			{
				i += ft_strlen(set);
				once = 1;
			}
		}
		trim[a] = s1[i];
		i++;
		a++;
	}
	return (trim);
}

int main()
{
	char s1[] = "bunu burdan al";
	char set[] = "burdan";
	printf ("%s", ft_strdel(s1, set));
}