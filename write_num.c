/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:25:32 by daniema3          #+#    #+#             */
/*   Updated: 2024/10/01 16:25:33 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_ultoa(unsigned long nb)
{
	int				digits;
	unsigned long	n;
	char			*res;

	digits = 1;
	n = nb;
	while (n > 9)
	{
		n /= 10;
		digits++;
	}
	res = malloc((digits + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[digits] = '\0';
	digits--;
	if (nb == 0)
		res[0] = '0';
	while (digits >= 0)
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
