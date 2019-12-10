/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 20:02:19 by vmoreau           #+#    #+#             */
/*   Updated: 2019/12/09 13:47:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	print_c(t_struct *st)
{
	char c;

	st->nb_read = st->nb_read - 1;
	c = va_arg(st->args, int);
	ft_putchar(c);
}
