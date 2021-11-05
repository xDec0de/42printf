/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:41:46 by danimart          #+#    #+#             */
/*   Updated: 2021/11/04 14:25:41 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	write_char(char ch);
int	write_str(char *str);
int	write_ptr(void *ptr, char *base);
int	write_num(int nb);
int	write_unum(unsigned int nb);
int	write_hex(unsigned long nb, char *base);

#endif
