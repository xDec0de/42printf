/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:52:05 by danimart          #+#    #+#             */
/*   Updated: 2021/11/02 16:25:53 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_ultoa(unsigned long nb)
{
	unsigned int	digits;
	unsigned long	n;
	char			*res;

	digits = 0;
	n = nb;
	while (n > 9)
	{
		n /= 10;
		digits++;
	}
	res = malloc(digits * sizeof(char));
	res[digits + 1] = '\0';
	if (!res)
		return (NULL);
	if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		res[digits] = ('0' + (nb % 10));
		nb /= 10;
		digits--;
	}
	return (res);
}

int	write_num(int nb)
{
	int		res;
	char	*num;

	res = 0;
	if (nb == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		res += write(1, "-", 1);
		nb = nb * -1;
	}
	num = ft_ultoa(nb);
	res += write_str(num);
	free(num);
	return (res);
}

int	write_unum(unsigned int nb)
{
	int		res;
	char	*num;

	num = ft_ultoa(nb);
	res = write_str(num);
	free(num);
	return (res);
}
