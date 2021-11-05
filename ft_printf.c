/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:25:21 by danimart          #+#    #+#             */
/*   Updated: 2021/11/04 16:22:13 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	replace_print(char ch, void *arg)
{
	int	res;

	res = 0;
	if (ch == 'c')
		res += write_char((char)arg);
	else if (ch == 's')
		res += write_str((char *)arg);
	else if (ch == 'p')
		res += write_ptr(arg, "0123456789abcdef");
	else if (ch == 'd')
		res += write_num((int) arg);
	else if (ch == 'i')
		res += write_num((int) arg);
	else if (ch == 'u')
		res += write_unum((unsigned int) arg);
	else if (ch == 'x')
		res += write_hex((unsigned int) arg, "0123456789abcdef");
	else if (ch == 'X')
		res += write_hex((unsigned int) arg, "0123456789ABCDEF");
	else
		write(1, &ch, 1);
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
				res += replace_print(str[i], va_arg(args, void *));
		}
		else if (find == 0 || find + 1 != i)
			res += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (res);
}
