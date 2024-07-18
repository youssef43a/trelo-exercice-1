#include <unistd.h>

int main(int ac, char** av)
{
	int i;
	int j;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				j = 'Z' - av[1][i] + 'A';
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				j = 'z' - av[1][i] + 'a';
			write(1, &j, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
