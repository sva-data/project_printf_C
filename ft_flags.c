/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 15:45:58 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 10:52:50 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_flags(t_print *p)
{
	if (*p->format == '-')
	{
		p->sign = 1;
		p->format++;
		if (*p->format == '0')
			p->format++;
	}
	else if (*p->format == '0')
	{
		p->sign = 0;
		p->sp_z = '0';
		p->format++;
	}
}
