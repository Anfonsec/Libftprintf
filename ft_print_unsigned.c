/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfonsec <anfonsec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:24:09 by anfonsec          #+#    #+#             */
/*   Updated: 2022/12/05 19:47:41 by anfonsec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_unsigned(int n, int fd)
{
	char		number;
	long int	nb;

	nb = (long)n;
	number = '\0';
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_print_unsigned(nb / 10, fd);
	}
	number = '0' + (nb % 10);
	write(fd, &number, 1);
}
/*
int main()

{
	const char *a = "OLA ";

	ft_print_unsigned(-14548845, 1);
	printf("%%%d\n", -14548845);
}
*/
