/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:52:39 by jbadia            #+#    #+#             */
/*   Updated: 2021/05/09 11:52:59 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putnbr(int n)
{
    if (n == -2147483648)
    {
		write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    if (n <= 9 && n >= 0)
    {
        ft_putchar(n + '0');
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}