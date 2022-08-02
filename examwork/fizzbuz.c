#include <unistd.h>

void	putint(int nbr)
{
	char	c;

	c = nbr + 48;
	write(1, &c ,1);
}

void	putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr < 10)
	{	
		putint(nbr);
		return;
	}
	if (nbr > 10)
	{
		putnbr(nbr / 10);
	}
	putnbr(nbr % 10);
	return;
}

int main(void)
{
	int a;
	a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && !(a % 5 == 0))
			write(1, "fizz", 4);
		else if (!(a % 3 == 0) && a % 5 == 0)
			write(1, "buzz", 4);
		else if (a % 3 == 0 && a % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			putnbr(a);
		write(1, "\n", 1);
		a ++;
	}
	return 0;
}
