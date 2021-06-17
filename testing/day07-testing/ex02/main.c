#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int		ft_ultimate_range(int **range, int min, int max);

void	print_int_arr(int *arr, int size)
{
	int index;
	
	index = 0;
	if (arr != NULL)
	{
		while(index < size)
		{
			printf("%d", arr[index]);
			index++;
			if (index < size)
				printf(", ");
		}
	}
	else
		printf("(null pointer)");
	printf("\n");
}

void	test_range(int min, int max)
{
	int *range;
	int result;
	
	printf("ft_ultimate_range(%d, %d):\n", min, max);
	result = ft_ultimate_range(&range, min, max);
	print_int_arr(range, result);
}

int		main(void)
{	
	test_range(1, 1);
	test_range(100, 1);
	test_range(1, 2);
	test_range(1, 3);
	test_range(1, 4);
	test_range(1, 5);
	test_range(-6, 6);
	test_range(7, 42);
	test_range(INT_MIN, INT_MIN + 10);
	test_range(INT_MAX - 10, INT_MAX);
	test_range(INT_MIN, INT_MAX);
	return (0);
}