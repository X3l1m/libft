/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/25 21:42:01 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/26 22:57:33 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lengt_of(int n)
{
	int	l;

	l = 0;
	while (l++, n > 9)
		n /= 10;
	return (l);
}

char	num_of(int n)
{
	n %= 10;
	return (n + 48);
}

char	*ft_itoa(int n)
{
	int			len;
	short int	sng;
	char		*it;

	sng = 0;
	if (n == -2147483648)
	{
		it = malloc(12);
		if (!it)
			return (0);
		it = "-2147483648";
		return (it);
	}
	if (n < 0)
	{
		sng = 1;
		n = -n;
	}
	len = lengt_of(n) + sng;
	it = malloc((len + 1) * sizeof(char));
	if (!it)
		return (0);
	it[len] = 0;
	while (len > sng)
	{
		it[--len] = num_of(n);
		n /= 10;
	}
	if (sng == 1)
		it[0] = '-';
	return (it);
}

/* int main()
{
	int a = -10;
	printf("%s", ft_itoa(a));
} */