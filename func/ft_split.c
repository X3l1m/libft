#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**split;
	(void) s;
	(void) c;

	split = malloc(150);


	//split[0] = malloc(15); //0
	split[0][50] = "denem";
	//split[1] = malloc(15); //1
	split[1][50] = "yanlis yazdin";
	//split[2] = malloc(5); //2
	split[2][50] = "yazmam gereken yer bu";
	return split;
}

int main()
{
	char **s;
	char c = ' ';
	s = ft_split("de sa;l falskjk lkdsa", c);

	printf("%s", s[2]);
}