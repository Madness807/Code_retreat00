#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char **tab;
	int i;
	int j;

	i = 0;
	//allocation memoire
	tab = malloc(6 * sizeof(char*));
	while(i < 5)
	{
		tab[i] = malloc(6 * sizeof(char));
		j = 0;
		while(j < 5)
		{
			tab[i][j] = '0';
			j++;
		}
		tab[i][j] = 0;
		i++;
	}
	tab[i] = 0;

	i = 0;
	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}