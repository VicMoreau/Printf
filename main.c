/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:17:46 by vmoreau           #+#    #+#             */
/*   Updated: 2019/12/06 20:31:44 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/ft_printf.h"

int main()
{
	char *str = "Coucou je suis victor j'ai";
	int nb = 23;
	char c = 'p';
	int p;
	int ftp;

	ftp = ft_printf("MY   :%s %dans %c%i\n", str, nb, c, nb);
	p = printf("BASE :%s %dans %c%i\n", str, nb, c, nb);
	printf("%d	%d", ftp, p);
	return (0);
}