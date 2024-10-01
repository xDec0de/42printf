#include "ft_printf.h"
#include <stdio.h>

// gcc -Wall -Werror -Wextra *.c

int main(void)
{
	int	ret = 0;
	char *null_str = NULL;

	// Intro //
	ft_printf("\n------- FT_PRINTF -------\n");
	// 1 //
	ret = ft_printf("1: %s", "Hello world");
	ft_printf(" | %d\n", ret);
	// 2 //
	ret = ft_printf("2: %s", null_str);
	ft_printf(" | %d\n", ret);
	// 3 //
	ret = ft_printf("3: \"%s\"", "");
	ft_printf(" | %d\n", ret);
	// 4 //
	ret = ft_printf("4: %p", &ret);
	ft_printf(" | %d\n", ret);
	// 5 //
	ret = ft_printf("5: %p", null_str);
	ft_printf(" | %d\n", ret);

	// Intro //
	printf("\n-------  PRINTF  --------\n");
	// 1 //
	ret = printf("1: %s", "Hello world");
	printf(" | %d\n", ret);
	// 2 //
	ret = printf("2: %s", null_str);
	printf(" | %d\n", ret);
	// 3 //
	ret = printf("3: \"%s\"", "");
	printf(" | %d\n", ret);
	// 4 //
	ret = printf("4: %p", &ret);
	printf(" | %d\n", ret);
	// 5 //
	ret = printf("5: %p", null_str);
	printf(" | %d\n", ret);
	return 0;
}
