/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:13:17 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 09:33:17 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nbr)
{
	char	*nb;
	int		len;

	len = 0;
	nb = ft_itoa(nbr);
	len += ft_printstr(nb);
	free(nb);
	return (len);
}
