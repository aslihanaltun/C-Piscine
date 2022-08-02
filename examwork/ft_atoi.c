
int	ft_atoi(const char *str)
{
	int	count;
	int minus;
	int result;

	count = 0;
	minus = 1;
	result = 0;
	while (str[count] == ' ')
		count ++;
	while (str[count] == '-' ||str[count] == '+')
	{
		if (str[count] == '-')
			minus *= -1;
		count++;
	}
	while ('0' <= str[count] && str[count] <= '9')
	{
		result = result * 10 + str[count] - 48;
		count ++;
	}
	return result * minus;
}

#include <stdio.h>

int main()
{
	printf("%d",ft_atoi("   -----+--123asd123"));
}
