#include <unistd.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')  
	{
		count ++;
	}
	return count;
}

int	ft_find(char *str, char c)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == c)
			return count;
		count ++;
	}
	return -1;
}

int main(int ac, char **av)
{
	int	count;
	int	count2;

	count = 0;
	if (ac == 3)
	{	
		while (av[1][count] != '\0')
		{
			count2 = 0;	
			while (av[2][count2] != '\0')
			{
				if (av[1][count] == av[2][count2])
				{
					if (ft_find(av[1], av[1][count]) == count)	
					{	
						write(1, &av[1][count], 1);
						break;
					}
				}
				count2 ++;
			}
			count ++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
