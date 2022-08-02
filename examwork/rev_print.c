#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}

char	*ft_rev_print(char *str)
{
	int	count;

	count = ft_strlen(str) - 1;
	while (0 <= count)
		write(1, &str[count--], 1);
}

int main(int ac, char **av)
{
	ft_rev_print(av[1]);
	return 0;
}	


