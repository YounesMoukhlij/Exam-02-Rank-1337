#include <unistd.h>

int main(int ac, char **av)
{
	int	l;

	l = 0;
	if (ac == 2)
	{
		while (av[1][l])
			l++;
		l -= 1;
		while (l >= 0)
			write(1, &av[1][l--], 1);
	}
	write(1, "\n", 1);
	return (0);
}
