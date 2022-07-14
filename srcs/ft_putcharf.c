/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wxuerui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:07:34 by wxuerui           #+#    #+#             */
/*   Updated: 2022/07/09 17:14:16 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharf(char c, t_flags *flags)
{
	if (!flags->minus)
		ft_print_chars(flags->c, flags->width - 1);
	write(1, &c, 1);
	if (flags->minus)
		ft_print_chars(flags->c, flags->width - 1);
	if (flags->width)
		return (flags->width);
	return (1);
}
