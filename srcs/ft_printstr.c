/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:05:20 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 09:24:42 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		len += write(1, "(null)", 6);
	else
	{
		while (*str)
		{
			len += write(1, &(*str), 1);
			str++;
		}
	}
	return (len);
}
