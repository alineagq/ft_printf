/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:18:20 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/10/12 15:14:37 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# define HEX_LW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
int		print_flags(char flag, va_list args);
int		ft_printchar(int c);
int		ft_printstr(char *str);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
int		ft_printnbr(int nbr);
int		ft_printhex_up(unsigned int hex, int len);
int		ft_printhex_lw(unsigned int hex, int len);
int		ft_printptr(unsigned long long ptr);
int		ft_printunbr(unsigned int nbr);
int		ft_printhex_add(unsigned long long hex, int len);

#endif