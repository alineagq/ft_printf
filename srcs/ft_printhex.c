/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:26:41 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/11 23:34:51 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex_up(int hex, int len)
{
	len++;
	if (hex >= 16)
		ft_printhex_up(hex / 16, len);
	write(1, &HEX_UP[hex % 16], 1);
	return (len);
}

int	ft_printhex_lw(int hex, int len)
{
	len++;
	if (hex >= 16)
		ft_printhex_lw(hex / 16, len);
	write(1, &HEX_LW[hex % 16], 1);
	return (len);
}
