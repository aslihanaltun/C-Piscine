#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return count;
}

int	main(int ac, char **av)
{
	int	count;
	int	count2;

	if (ac == 2)
	{
		count = ft_strlen(av[1]) - 1;
		count2 = 0;
		while (av[1][count] == ' ' ||av[1][count] == '\t')
			count --;
		while (av[1][count] != ' ' &&av[1][count] != '\t') 
			count --;
		count2 = count + 1;
		while (av[1][count2] != ' ' && av[1][count2])
			write(1, &av[1][count2++], 1);
	}
	write (1,"\n", 1);
	return (0);
}
