/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:29:17 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 10:43:28 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		nb = -nb;
	len += ft_printnbr(nb);
	return (len);
}
