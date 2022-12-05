/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfonsec <anfonsec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:26:00 by anfonsec          #+#    #+#             */
/*   Updated: 2022/12/05 19:27:42 by anfonsec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

static int	f_format(va_list args, const char str)
{
	size_t	print_lenght;
	
	print_lenght = 0;
	if (str == 'c')
		print_lenght = ft_printchar((long)va_arg(args, int));
	else if (str == 's')
		print_lenght = ft_printstr(va_arg(args, char *));
	else if (str == 'p')
		print_lenght = ft_printpointer(va_arg (args, long unsigned int);
	else if (str == 'd'|| str == "i")
		print_lenght = ft_print_nbr((long)va_arg(args, int));
	else if (str == 'i')
		print_lenght = ft_print_nbr((long)va_arg(args, int));
	else if (str == 'u')
		print_lenght = ft_print_unsigned((long)va_arg(args, unsigned int));
	else if (str == 'x')
		print_lenght = ft_print_nbr_HEX(va_arg(args, unsigned int));
	else if (str == 'X')
		print_lenght = ft_print_nbr_hex(va_arg(args, unsigned int));
	else if (str == '%')
		print_lenght = write(1, "%%", 1);
		return(print_lenght);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	va_list	args;
	size_t	total_lenght;

	va_start(args, str);
	i = -1;
	j = 0;
	tota_lenght = 0;
	while (str[++i] != '\0')
	{
		if (str[++i] == '%')
		{
			i += 1;
			total_lenght += f_format(args, str[i]);
			j++;
			}
		}
		ft_putchar_fd(str[i], 1);
		j++;
		i++;
	}
	va_end(args);
	return(total_lenght);
}