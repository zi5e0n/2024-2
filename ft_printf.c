/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <jiseshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:34:42 by jiseshin          #+#    #+#             */
/*   Updated: 2025/02/13 22:34:40 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_char(va_list ap)
{
	char	var;

	var = va_arg(ap, int);
	return (write(1, &var, 1));
}

int	print_string(va_list ap)
{
	char	*var;

	var = va_arg(ap, char *);
	return (write(1, var, ft_strlen(var)));
}

int	print_integer(va_list ap)
{
	int		i;
	int		len;
	char	*var;

	i = va_arg(ap, int);
	var = ft_itoa(i);
	len = write(1, var, ft_strlen(var));
	free(var);
	return (len);
}

int	check_form(const char *format, va_list ap)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len = print_char(ap);
	else if (*format == 's')
		len = print_string(ap);
	else if (*format == 'd' || *format == 'i')
		len = print_integer(ap);
	else if (*format == 'p')
		len = print_pointing(ap);
	else if (*format == 'u')
		len = print_unsigned(ap);
	else if (*format == 'x' || *format == 'X')
		len = print_hex(ap);
	else if (*format == '%')
		len = write(1, "%", 1);
	else
		return (-1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			len += check_form(format, ap);
		}	
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (len);
}
