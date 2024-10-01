/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_txt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:25:42 by daniema3          #+#    #+#             */
/*   Updated: 2024/10/01 17:06:37 by daniema3         ###   ########.fr       */
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
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2) + write_hex((long) ptr, base));
}
