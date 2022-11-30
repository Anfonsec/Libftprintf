/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfonsec <anfonsec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:28:08 by anfonsec          #+#    #+#             */
/*   Updated: 2022/11/30 14:31:25 by anfonsec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (!*s)
		return ;
	while (s[len])
		len++;
	{
		write (fd, s, len);
	}
}
