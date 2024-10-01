/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:25:24 by daniema3          #+#    #+#             */
/*   Updated: 2024/10/01 16:25:26 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_arg(va_list args, char ch)
{
	if (ch == '%')
		return (write_char(ch));
	if (ch == 'c')
		return (write_char((char) va_arg(args, void *)));
	if (ch == 's')
		return (write_str(va_arg(args, char *)));
	if (ch == 'p')
		return (write_ptr(va_arg(args, void *), "0123456789abcdef"));
	if (ch == 'd' || ch == 'i')
		return (write_num(va_arg(args, int)));
	if (ch == 'u')
		return (write_unum(va_arg(args, unsigned int)));
	if (ch == 'x')
		return (write_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	if (ch == 'X')
		return (write_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	return (write(1, &ch, 1));
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
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			find = i++;
			res += write_arg(args, str[i]);
		}
		else if (find == 0 || find + 1 != i)
			res += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (res);
}
