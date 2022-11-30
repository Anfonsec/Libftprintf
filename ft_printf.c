/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfonsec <anfonsec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:26:00 by anfonsec          #+#    #+#             */
/*   Updated: 2022/11/30 17:44:15 by anfonsec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

static int	f_format(va_list args, const char *str, int *i)
{
	int	print_lenght;

	if (str == 'c')
		print_lenght += ft_printchar (va_arg (args, int));
	else if (str == 's')
		print_lenght += ft_printstr (va_arg (args, str));
	else if (str == 'p')
		print_lenght += ft_printpointer (va_arg (args, unsigned long long);
	else if (str == 'd')
		print_lenght += ft_print_nbr(va_arg(args, int));
	else if (str == 'i')
		print_lenght += ft_print_unsig(va_arg(args, int));
	else if (str == 'u')
		print_lenght += ft_print_un_nbr(va_arg(args, int));
	else if (str == 'x')
		print_lenght += ft_print_nbr_HEX(va_arg(args, int))
	else if (str == 'X')
		print_lenght += ft_print_nbr_hex(va_arg(args, int));
	else if (str == '%')
		print_lenght += ft_print_perc(va_arg(args, int));	
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	va_list	args;

	va_start(args, str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", str[++i]))
			{
				j += f_format(str, &i, args);
				i++;
				continue ;
			}
		}
		ft_putchar_fd(str[i], 1);
		j++;
		i++;
	}
	va_end(args);
	return (j);
	
}

/*char	*ft_strchr(const char *s, int c)

{
	char	*str;

	str = (char *)s;
	while (*str != (unsigned char)c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}*/