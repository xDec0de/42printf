/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_txt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:49:03 by danimart          #+#    #+#             */
/*   Updated: 2024/01/25 13:06:10 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_char(char ch)
{
	return (write(1, &ch, 1));
}

int	write_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
		i += write(1, &str[i], 1);
	return (i);
}

int	write_base(unsigned long nb, char *base)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (0);
	i += write_base(nb / 16, base);
	i += write(1, &base[nb % 16], 1);
	return (i);
}

int	write_hex(unsigned long nb, char *base)
{
	int	res;

	res = write_base(nb, base);
	if (res == 0)
		return (write(1, "0", 1));
	return (res);
}

int	write_ptr(void *ptr, char *base)
{
	if (ptr == NULL)
		return (write(1, "0x0", 3));
	return (write(1, "0x", 2) + write_hex((long) ptr, base));
}
