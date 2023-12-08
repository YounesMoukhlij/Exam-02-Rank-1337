#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int main(int ac, char **av)
{
	char	*s;
	int		i;
	int		start;
	int		end;
	int		f;

	s = av[1];
	i = 0;
	if (ac == 2)
	{
		while (s[i])
			i++;
		while (i >= 0)
		{
			while (s[i] == '\0' || s[i] == ' ' || s[i] == '\t')
				i--;
			end = i;
			while (s[i] && s[i] != ' ' && s[i] != '\t')
				i--;
			start = i + 1;
			f = start;
			while (start <= end)
			{
				write(1, &s[start], 1);
				start++;
			}
			if (f != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
