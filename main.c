#include <stdio.h>
#include <unistd.h>

int main()
{
	char c = 1;
	write(1, &c, 1);
}