/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:29:17 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 15:10:43 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(unsigned int nbr)
{
	char	*nb;
	int		len;

	len = 0;
	nb = ft_uitoa(nbr);
	len += ft_printstr(nb);
	free(nb);
	return (len);
}
