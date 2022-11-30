/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfonsec <anfonsec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:29:15 by anfonsec          #+#    #+#             */
/*   Updated: 2022/11/30 14:31:20 by anfonsec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		number;
	long int	nb;

	nb = (long)n;
	number = '\0';
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd (nb / 10, fd);
	}
	number = '0' + (nb % 10);
	write (fd, &number, 1);
}
