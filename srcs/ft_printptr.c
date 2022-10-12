/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:45:41 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 09:26:07 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long int ptr)
{
	int len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_printhex_lw(ptr, 0);
	return (len);
}
