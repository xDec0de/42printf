/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:25:17 by daniema3          #+#    #+#             */
/*   Updated: 2024/10/03 16:09:32 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

/**
 * @brief A very basic replica of the `printf`
 * function included by `stdio.h`. This function
 * only supports the following conversions:
 * `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`.
 * 
 * Internally, this function uses `write` and always
 * writes to fd 1.
 * 
 * @param str The string to print.
 * @param ... The variabe arguments to convert.
 * 
 * @return The amount of characters that were printed.
 */
int	ft_printf(const char *str, ...);

/**
 * @brief Writes one character to fd 1.
 * 
 * @param ch The character to write.
 * 
 * @return Always 1, which is the amount
 * of characters written.
 */
int	write_char(char ch);

/**
 * @brief Writes a string to fd 1, may write
 * "(null)" if `str` is `NULL`.
 * 
 * @param str The string to write, can be `NULL`.
 * 
 * @return The amount of characters written,
 * generally the length of `str`, this can
 * differ if `str` is `NULL`, in that case
 * 6 is returned as "(null)" is written.
 */
int	write_str(char *str);

/**
 * @brief Writes the address of a pointer to fd 1,
 * may write "(nil)" if `ptr` is `NULL`
 * 
 * @param ptr The pointer to write, can be `NULL`.
 * @param base The base at which to write the address of `ptr`,
 * this base must be a hexadecimal base, or, in other words, it
 * must consist of 16 different characters, any other type of base
 * results in undefined behaviour.
 * 
 * @return The amount of characters written, 5 if `ptr`
 * is `NULL`, as "(nil)" is written in that case.
 */
int	write_ptr(void *ptr, char *base);

/**
 * @brief Writes an integer to fd 1. For unsigned integers
 * use `write_unum`.
 * 
 * @param nb The integer to write.
 * 
 * @return The amount of characters written, this corresponds
 * to the amount of digits that `nb` has, adding one if `nb`
 * is negative as the sign is also written in that case.
 */
int	write_num(int nb);

/**
 * @brief Writes an unsigned integer to fd 1. For signed integers
 * use `write_num`.
 * 
 * @param nb The unsigned integer to write.
 * 
 * @return The amount of characters written, this corresponds
 * to the amount of digits that `nb` has.
 */
int	write_unum(unsigned int nb);

/**
 * @brief Writes an unsigned long in a specific hexadecimal
 * `base` to fd 1.
 * 
 * @param nb The unsigned long to write.
 * @param base The base to use. This base must be a hexadecimal
 * base, or, in other words, it must consist of 16 different
 * characters, any other type of base results in undefined behaviour.
 * 
 * @return The amount of characters written.
 */
int	write_hex(unsigned long nb, char *base);

#endif
