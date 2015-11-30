#include <stdio.h>

int		nb_words(char *s, char c)
{
	int nbofwords;
	int beginword;
	while(*s != '\0')
	{
		if (beginword == 1 && *s == c)
			beginword = 0;
		if (beginword == 0 && *s != c)
		{
			beginword = 1;
			nbofwords++;
		}
		s++;
	}
	return (nbofwords);
}



/*char		**ft_strsplit(char const *s, char c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			i++;
		}
	}
}*/

int main(int ac, char **av)
{
	printf("%d\n", nb_words(av[1], ' '));
	return(0);
}