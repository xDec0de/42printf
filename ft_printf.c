/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:25:21 by danimart          #+#    #+#             */
/*   Updated: 2021/11/02 15:42:10 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	replace_print(const char *str, int i, void *arg)
{
	int	res;

	res = 0;
	if (str[i] == 'c')
		res += write_char((char)arg);
	else if (str[i] == 's')
		res += write_str((char *)arg);
	else if (str[i] == 'p')
		res += write_ptr(arg, "0123456789abcdef");
	else if (str[i] == 'd')
		res += write_num((int) arg);
	else if (str[i] == 'i')
		res += write_num((int) arg);
	else if (str[i] == 'u')
		res += write_unum((unsigned long) arg);
	else if (str[i] == 'x')
		res += write_hex((unsigned int) arg, "0123456789abcdef");
	else if (str[i] == 'X')
		res += write_hex((unsigned int) arg, "0123456789ABCDEF");
	else
		write(1, &str[i], 1);
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		find;
	int		res;
	va_list	args;

	i = 0;
	find = 0;
	res = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			find = i++;
			if (str[i] == '%')
				res += write(1, "%", 1);
			else
				res += replace_print(str, i, va_arg(args, void *));
		}
		else if (find == 0 || find + 1 != i)
			res += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (res);
}
