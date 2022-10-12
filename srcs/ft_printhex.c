/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:26:41 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 15:14:24 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex_up(unsigned int hex, int len)
{
	if (hex >= 16)
		len += ft_printhex_up(hex / 16, len);
	len += write(1, &HEX_UP[hex % 16], 1);
	return (len);
}

int	ft_printhex_lw(unsigned int hex, int len)
{
	if (hex >= 16)
		len += ft_printhex_lw(hex / 16, len);
	len += write(1, &HEX_LW[hex % 16], 1);
	return (len);
}

int	ft_printhex_add(unsigned long long hex, int len)
{
	if (hex >= 16)
		len += ft_printhex_add(hex / 16, len);
	len += write(1, &HEX_LW[hex % 16], 1);
	return (len);
}
