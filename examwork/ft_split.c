#include <stdlib.h>

int check_seperator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}
// checks if the given char is in the charset string.

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		while (str[i] != '\0' && check_seperator(str[i], charset))
			i ++;
		if (str[i] != '\0')
			count ++;
		while (str[i] != '\0' && !check_seperator(str[i], charset))
		   i ++;	
	}
	return count;
}
// counts the words in the given string


int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_seperator(str[i], charset))
		i ++;
	return (i);
}
// counts the length untill a sep.

char *ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}
// returns the next word;

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;
	int		count;

	i = 0;
	count = 0;
	strings = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	while (str[i] != '\0')	
	{
		while (str[i] != '\0' && check_seperator(str[i], charset))
			i ++;
		if (str[i] != '\0')
		{
			strings[count] = ft_word(&str[i], charset);
			count ++;
		}
		while (str[i] != '\0' && !check_seperator(str[i], charset))
			i ++;
	}
	strings[count] = 0;
	return (strings);
}
// main split

#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argv;
	(void)	argc;
	split = ft_split("oguzhan\ndeneme\tasli mehmet", " \n\t");
	index = 0;
	while (split[index] != 0)
	{
		printf("%s\n", split[index]);
		index++;
	}
}
