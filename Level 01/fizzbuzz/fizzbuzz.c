#include <unistd.h>

void	print_numbers(int a)
{
	if (a >= 10)
		print_numbers (a / 10);
	write(1, &"0123456789"[a % 10], 1);
}

int main(void)
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (a % 3 == 0)
			write(1, "fizz", 4);
		else if (a % 5 == 0)
			write(1, "buzz", 4);
		else
			print_numbers(a);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}