/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:18:24 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 09:35:22 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_flags(char flag, va_list args);

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] != '%')
			len += write(1, &(str[i]), 1);
		else
		{
			i++;
			len += print_flags(str[i], args);
		}
		i++;
	}
	va_end(args);
	return (len);
}

int	print_flags(char flag, va_list args)
{
	int	len;

	len = 0;
	if (flag == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (flag == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (flag == 'p')
		len += ft_printptr(va_arg(args, unsigned long int));
	else if (flag == 'd' || flag == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (flag == 'u')
		len += ft_printunbr(va_arg(args, int));
	else if (flag == 'x')
		len += ft_printhex_lw(va_arg(args, int), 0);
	else if (flag == 'X')
		len += ft_printhex_up(va_arg(args, int), 0);
	else if (flag == '%')
		len += ft_printchar('%');
	return (len);
}