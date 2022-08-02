#include <unistd.h>

void	putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count ++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int count;

		count = 0;
		while (av[1][count] != '\0')
		{
			if ('a' <= av[1][count] && av[1][count] <= 'z')
				av[1][count] -= 32;
			else if ('A' <= av[1][count] && av[1][count] <= 'Z')
				av[1][count] += 32;
			count ++;
		}
		putstr(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
