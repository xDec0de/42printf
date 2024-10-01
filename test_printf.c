#include "ft_printf.h"
#include <stdio.h>

// gcc *.c

int main(void)
{
	int	ret = 0;
	char *null_str = NULL;

	// Intro //
	ft_printf("\n------- FT_PRINTF -------\n");
	// 1 //
	ret = ft_printf("1: %c", 'a');
	ft_printf(" | %d\n", ret);
	// 2 //
	ret = ft_printf("2: %s", "Hello world");
	ft_printf(" | %d\n", ret);
	// 3 //
	ret = ft_printf("3: %s", null_str);
	ft_printf(" | %d\n", ret);
	// 4 //
	ret = ft_printf("4: \"%s\"", "");
	ft_printf(" | %d\n", ret);
	// 5 //
	ret = ft_printf("5: %p", &ret);
	ft_printf(" | %d\n", ret);
	// 6 //
	ret = ft_printf("6: %p", null_str);
	ft_printf(" | %d\n", ret);
	// 7 //
	ret = ft_printf("7: %d", 42);
	ft_printf(" | %d\n", ret);
	// 8 //
	ret = ft_printf("8: %d", -42);
	ft_printf(" | %d\n", ret);
	// 9 //
	ret = ft_printf("9: %d", 0);
	ft_printf(" | %d\n", ret);
	// 10 //
	ret = ft_printf("10: %d", 2147483647);
	ft_printf(" | %d\n", ret);
	// 11 //
	ret = ft_printf("11: %d", -2147483648);
	ft_printf(" | %d\n", ret);
	// 12 //
	ret = ft_printf("12: %d", -2247483649);
	ft_printf(" | %d\n", ret);

	// Intro //
	printf("\n-------  PRINTF  --------\n");
	// 1 //
	ret = ft_printf("1: %c", 'a');
	ft_printf(" | %d\n", ret);
	// 2 //
	ret = printf("2: %s", "Hello world");
	printf(" | %d\n", ret);
	// 3 //
	ret = printf("3: %s", null_str);
	printf(" | %d\n", ret);
	// 4 //
	ret = printf("4: \"%s\"", "");
	printf(" | %d\n", ret);
	// 5 //
	ret = printf("5: %p", &ret);
	printf(" | %d\n", ret);
	// 6 //
	ret = printf("6: %p", null_str);
	printf(" | %d\n", ret);
	// 7 //
	ret = printf("7: %d", 42);
	printf(" | %d\n", ret);
	// 8 //
	ret = printf("8: %d", -42);
	printf(" | %d\n", ret);
	// 9 //
	ret = printf("9: %d", 0);
	printf(" | %d\n", ret);
	// 10 //
	ret = printf("10: %d", 2147483647);
	printf(" | %d\n", ret);
	// 11 //
	ret = printf("11: %d", -2147483648);
	printf(" | %d\n", ret);
	// 12 //
	ret = printf("12: %d", -2247483649);
	printf(" | %d\n", ret);
	return 0;
}
