/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfonsec <anfonsec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:26:00 by anfonsec          #+#    #+#             */
/*   Updated: 2022/11/30 15:37:31 by anfonsec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

static int	f_format(const char *str, int *i, va_list ap)
{
	int	t;
	
}
int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (ft_strchr("cspdiuxX%"), str[++i])
			{
				j += f_format(str, &i, ap);
				i++;
				continue ;
			}
		}
		ft_putchar_fd(str[i], 1);
		j++;
		i++;
	}
	va_end(ap);
}