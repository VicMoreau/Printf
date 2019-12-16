/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 20:53:21 by vmoreau           #+#    #+#             */
/*   Updated: 2019/12/16 19:42:27 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

static void		ft_putnstr(char *str, int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		write(1, &str[i], 1);
		n--;
		i++;
	}
}

void			print_s(t_struct *st, t_flags *flg, const char **str)
{
	char	*str_read;
	int		size;

	(*str)++;
	str_read = va_arg(st->args, char *);
	if (str_read == NULL)
	{
		st->min_int = 1;
		if (flg->field > 0 && flg->dash == 0 && flg->dot == 1 
			&& flg->prec > 6)
		{
			st->bool = 1;
			flg->field += 6;
			st->nb_read -= 6;
		}
		str_read = "(null)";
	}
	size = ft_strlen(str_read);
	st->nb_read += set_ret_s(flg, size);
	check_s(flg, st, size);
	ft_putnstr(str_read, st->read);
	if (flg->dash == 1)
		print_field_d1(flg);
}
