#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_hexaconverter(void *c)
{
	long int addr;
	char array[16];
	int rev_count;
	int count; 

	count = 0;
	addr = (long int) &c;
	rev_count = 15;

	while (rev_count > 0)
	{
		if (addr % 16 < 10)
		{
		array[rev_count] = addr % 16 + 48;
		addr /= 16;
		rev_count --;
		}
		else
		{
		array[rev_count] = addr % 16 + 67;
		addr /= 16;
		rev_count --;
		}
	}
	return array;
}

void	printarr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count ++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int count;
	int count2;

	count = 0;	
	count2 = 0;
	printarr(ft_hexaconverter(addr[0]));
	write(1, ": ", 2);
	while (count < 15)
	{	
		printarr(ft_hexaconverter(addr[count]));	
		printarr(ft_hexaconverter(addr[count + 1]));
		write(1, ' ', 1);
		count += 2;
	}
	while (addr[count2] != '\0' )
	{
		ft_putchar(addr[count]);
		count ++;
	}	
}


int main(void)
{
	char	array[16] = "Bonjour les amin";
	ft_hexaconverter(array);
	ft_print_memory(array, 16);
	printf("\n%x\n",array);
	printf("%p\n",array);
	
	return 0;
}

