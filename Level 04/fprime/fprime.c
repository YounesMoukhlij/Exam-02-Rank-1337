#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int ft_atoi(char *s)
{
	int sign = 1;

	while (*s && (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	int r = 0;
	while (*s && (*s >= '0' && *s <= '9'))
	{
		r *= 10;
		r += *s - 48;
		s++;
	}
	return (r * sign);
}

int		is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 1;
	int r;


	if (ac == 2)
	{
		r = ft_atoi(av[1]);
		if (r == 1)
			printf("1");
		else
			while (r >= i)
			{
				while (!is_prime(i))
					i++;
				if (r % i == 0)
				{
					printf("%d", i);
					if (r == i)
						break ;
					printf("*");
					r /= i;
					i = 1;
				}
				i++;
			}
	}
	printf("\n");
	return (0);
}

