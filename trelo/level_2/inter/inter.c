#include <unistd.h>

int main(int ac ,char **av)
{
	int i;
	int j;
	if (ac == 2)
	{
		i = 0;
		while(av[2][i])
		{
			j = 0;
			while (av[1][j])
			{
				if (av[1][j] == av[2][i])
					write(1, &av[1][j], 1);
				j++;
			}
			i++;
		}
	}
}
