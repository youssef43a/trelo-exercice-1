#include <unistd.h>

int main(int ac, char** av)
{
	if (ac == 2)
	{
		int i;
		int j;
		int k;

		i = 0;
		while (av[1][i])
		{
			j = 0;
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				j = av[1][i] - 'A' + 1;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				j = av[1][i] - 'a' + 1;
			else
				write(1, &av[1][i], 1);
			k = 0;
			while(k < j)
			{
				write(1, &av[1][i], 1);
				k++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
