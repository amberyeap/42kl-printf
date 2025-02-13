/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayeap <ayeap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:19:52 by ayeap             #+#    #+#             */
/*   Updated: 2024/06/19 12:52:59 by ayeap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	print_format(char c, va_list ap)
{
	char	*lower_base16;
	char	*upper_base16;
	char	*base10;

	lower_base16 = "0123456789abcdef";
	upper_base16 = "0123456789ABCDEF";
	base10 = "0123456789";
	if (c == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(ap, void *), lower_base16));
	else if (c == 'd' || c == 'i')
		return (ft_print_digit(va_arg(ap, int), base10));
	else if (c == 'u')
		return (ft_print_digit(va_arg(ap, unsigned int), base10));
	else if (c == 'x')
		return (ft_print_lower_hex(va_arg(ap, unsigned int), lower_base16));
	else if (c == 'X')
		return (ft_print_upper_hex(va_arg(ap, unsigned int), upper_base16));
	else
		return (write(1, &c, 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (format == NULL)
		return (1);
	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

#include <stdio.h>

int main(void)
{
	ft_printf("%x %s", -38);
}