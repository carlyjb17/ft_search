/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:39:26 by ltranca-          #+#    #+#             */
/*   Updated: 2023/01/04 16:26:50 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(long long int n)
{
	int	ret;

	ret = 1;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		ret++;
		n = n / 10;
	}
	return (ret);
}