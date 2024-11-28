/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansari <gansari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:22:33 by gansari           #+#    #+#             */
/*   Updated: 2024/11/26 18:22:38 by gansari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <limits.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_printf(char c, size_t *i);
void	ft_putstr_printf(char *s, size_t *i);
void	ft_putnbr_printf(int nb, size_t *i);
void	ft_putnbr_base_printf(unsigned int nbr, char *base, size_t *i);
void	ft_putunsignednbr_printf(unsigned int nb, size_t *i);
void	ft_putptr_printf(void *ptr, size_t *i);
void	ft_putstr(char *s);

#endif
