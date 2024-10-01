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
	// 13 //
	ret = ft_printf("13: %i", 42);
	ft_printf(" | %d\n", ret);
	// 14 //
	ret = ft_printf("14: %i", -42);
	ft_printf(" | %d\n", ret);
	// 15 //
	ret = ft_printf("15: %i", 0);
	ft_printf(" | %d\n", ret);
	// 16 //
	ret = ft_printf("16: %i", 2147483647);
	ft_printf(" | %d\n", ret);
	// 17 //
	ret = ft_printf("17: %i", -2147483648);
	ft_printf(" | %d\n", ret);
	// 18 //
	ret = ft_printf("18: %i", -2247483649);
	ft_printf(" | %d\n", ret);
	// 19 //
	ret = ft_printf("19: %u", 42);
	ft_printf(" | %d\n", ret);
	// 20 //
	ret = ft_printf("20: %u", -42);
	ft_printf(" | %d\n", ret);
	// 21 //
	ret = ft_printf("21: %u", 0);
	ft_printf(" | %d\n", ret);
	// 22 //
	ret = ft_printf("22: %u", 2147483647);
	ft_printf(" | %d\n", ret);
	// 23 //
	ret = ft_printf("23: %u", -2147483648);
	ft_printf(" | %d\n", ret);
	// 24 //
	ret = ft_printf("24: %u", -2247483649);
	ft_printf(" | %d\n", ret);
	// 25 //
	ret = ft_printf("25: %x", 42);
	ft_printf(" | %d\n", ret);
	// 26 //
	ret = ft_printf("26: %x", -42);
	ft_printf(" | %d\n", ret);
	// 27 //
	ret = ft_printf("27: %x", 0);
	ft_printf(" | %d\n", ret);
	// 28 //
	ret = ft_printf("28: %x", 2147483647);
	ft_printf(" | %d\n", ret);
	// 29 //
	ret = ft_printf("29: %x", -2147483648);
	ft_printf(" | %d\n", ret);
	// 30 //
	ret = ft_printf("30: %x", -2247483649);
	ft_printf(" | %d\n", ret);
	// 31 //
	ret = ft_printf("31: %X", 42);
	ft_printf(" | %d\n", ret);
	// 32 //
	ret = ft_printf("32: %X", -42);
	ft_printf(" | %d\n", ret);
	// 33 //
	ret = ft_printf("33: %X", 0);
	ft_printf(" | %d\n", ret);
	// 34 //
	ret = ft_printf("34: %X", 2147483647);
	ft_printf(" | %d\n", ret);
	// 35 //
	ret = ft_printf("35: %X", -2147483648);
	ft_printf(" | %d\n", ret);
	// 36 //
	ret = ft_printf("36: %X", -2247483649);
	ft_printf(" | %d\n", ret);
	// 37 //
	ret = ft_printf("37: %%%s", "%%");
	ft_printf(" | %d\n", ret);
	// 38 //
	ret = ft_printf("38: %%%c%%%s%%%p%%%d%%%i%%%u%%%x%%%X", 'a', "s", &ret, 1, 2, 3, 4, 5);
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
	// 13 //
	ret = printf("13: %i", 42);
	printf(" | %d\n", ret);
	// 14 //
	ret = printf("14: %i", -42);
	printf(" | %d\n", ret);
	// 15 //
	ret = printf("15: %i", 0);
	printf(" | %d\n", ret);
	// 16 //
	ret = printf("16: %i", 2147483647);
	printf(" | %d\n", ret);
	// 17 //
	ret = printf("17: %i", -2147483648);
	printf(" | %d\n", ret);
	// 18 //
	ret = printf("18: %i", -2247483649);
	printf(" | %d\n", ret);
	// 19 //
	ret = printf("19: %u", 42);
	printf(" | %d\n", ret);
	// 20 //
	ret = printf("20: %u", -42);
	printf(" | %d\n", ret);
	// 21 //
	ret = printf("21: %u", 0);
	printf(" | %d\n", ret);
	// 22 //
	ret = printf("22: %u", 2147483647);
	printf(" | %d\n", ret);
	// 23 //
	ret = printf("23: %u", -2147483648);
	printf(" | %d\n", ret);
	// 24 //
	ret = printf("24: %u", -2247483649);
	printf(" | %d\n", ret);
	// 25 //
	ret = printf("25: %x", 42);
	printf(" | %d\n", ret);
	// 26 //
	ret = printf("26: %x", -42);
	printf(" | %d\n", ret);
	// 27 //
	ret = printf("27: %x", 0);
	printf(" | %d\n", ret);
	// 28 //
	ret = printf("28: %x", 2147483647);
	printf(" | %d\n", ret);
	// 29 //
	ret = printf("29: %x", -2147483648);
	printf(" | %d\n", ret);
	// 30 //
	ret = printf("30: %x", -2247483649);
	printf(" | %d\n", ret);
	// 31 //
	ret = printf("31: %X", 42);
	printf(" | %d\n", ret);
	// 32 //
	ret = printf("32: %X", -42);
	printf(" | %d\n", ret);
	// 33 //
	ret = printf("33: %X", 0);
	printf(" | %d\n", ret);
	// 34 //
	ret = printf("34: %X", 2147483647);
	printf(" | %d\n", ret);
	// 35 //
	ret = printf("35: %X", -2147483648);
	printf(" | %d\n", ret);
	// 36 //
	ret = printf("36: %X", -2247483649);
	printf(" | %d\n", ret);
	// 37 //
	ret = printf("37: %%%s", "%%");
	printf(" | %d\n", ret);
	// 38 //
	ret = printf("38: %%%c%%%s%%%p%%%d%%%i%%%u%%%x%%%X", 'a', "s", &ret, 1, 2, 3, 4, 5);
	printf(" | %d\n", ret);
	return 0;
}
