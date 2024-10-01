/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:25:17 by daniema3          #+#    #+#             */
/*   Updated: 2024/10/01 16:25:18 by daniema3         ###   ########.fr       */
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
