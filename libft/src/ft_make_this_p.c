/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_this_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:32:14 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/05 02:12:36 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_make_this_p(long unsigned int n)
{
	long unsigned int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_make_this_p((n / 16));
		i += ft_make_this_p((n % 16));
	}
	else
	{
		if (n < 10)
			i += ft_putnbr_printf(n + 0, 1);
		else
			i += ft_putchar_printf(n + 'a' - 10, 1);
	}
	return (i);
}
