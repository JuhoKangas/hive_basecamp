#include <stdio.h>
#include <stdlib.h>


char	**ft_split_whitespaces(char *str);

void	print_str_arr(char **str_arr)
{
	int			index;
	
	index = 0;
	printf("[---\n");
	while (str_arr[index] != 0)
	{
		printf("%d:[%s]\n",index, str_arr[index]);
		index++;
	}
	printf("%d:[%s]\n",index, str_arr[index]);
	printf("---]\n");
}

void	test_split(char *str)
{
	char	**result;

	result = ft_split_whitespaces(str);
	print_str_arr(result);
	free(result);
}

int		main(void)
{
	test_split("You know, this is — excuse me — a damn fine cup of coffee!");
	test_split("Mr. Cooper, how do you take it?");
	test_split("Black as midnight on a moonless night.");
	test_split("      Four               wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split(" Four                 wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split("\tFour                   wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split("\nFour                   wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split("\nFour                   wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split("\t Four                 wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split(" \nFour                 wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split("\n\tFour                 wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here");
	test_split("\n\t\n    \n   \n\n\n\tFour         wor\t\n\t \tds\n \there");
	test_split("");
	test_split("        \n\n\n\n\t\t\t\t\t          ");
	return (0);
}