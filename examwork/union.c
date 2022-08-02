#include <unistd.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count ++;
	return count;
}

char	*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	return dest;
}

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int len;

	count = 0;
	len = ft_strlen(dest);
	while (src[count] != '\0')
	{
		dest[len] = src[count];
		count++;
		len++;
	}
	dest[len] = '\0';
	return dest;
}

int main(int ac, char **av)
{
	int count = 0;
	int count2 = 0;
	if (ac == 3)
	{	
		char	result[2048];
		ft_strcpy(result, av[1]);
		ft_strcat(result, av[2]);
		write(1, &result[0], 1);
		count ++;

		while (result[count] != '\0')
		{	
			count2 = count - 1;
			while (0 <= count2)
			{
				if (result[count] == result[count2])
				{
					break;
				}
				count2 --;
			}
			if (count2 == -1)
				write(1, &result[count], 1);
			count ++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
