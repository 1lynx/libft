#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	essai(char c)
{
	c += -5;
}


int		main(int ac, char **av)
{
	char *dest = "colinco";
	char *src = "colin";
	printf("result : %s\n", ft_striter(dest, essai(*dest)));
	//printf("original : %s\n", strcpy(av[1], av[2]));
	return(0);
}
