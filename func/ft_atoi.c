/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 18:17:05 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/10 18:17:09 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sy;
	int	r;

	r = 0;
	i = 0;
	sy = 1;
	while (str[i] == 32 || (str[i] >= 0 && str[i] <= 9))
		i++;
	if (str[i] == '-')
	{
		sy *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		r = (r * 10) + (str[i++] - '0');
	return (r * sy);
}

/* #include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d", ft_atoi("8352"));
} */