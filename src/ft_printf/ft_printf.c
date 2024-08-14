/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:48:20 by inazaria          #+#    #+#             */
/*   Updated: 2024/08/14 16:33:59 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_printf_aux(char *str, t_conversionFuncPtr *conv_table, va_list args)
{
	int		counter;
	t_args	s_args;

	counter = 0;
	s_args = (t_args){};
	s_args.rendue = 0;
	va_copy(s_args.args, args);
	while (str && str[counter])
	{
		if (str[counter] != '%')
		{
			ft_putchar(str[counter]);
			s_args.rendue++;
			counter++;
		}
		else
		{
			s_args = conv_table[(int) parse_next_arg(str + counter)](s_args);
			counter += 2;
		}
	}
	return (s_args.rendue);
}

int	ft_printf(const char *format, ...)
{
	int					rendue;
	va_list				args;
	t_conversionFuncPtr	*conv_table;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	conv_table = make_conversion_table();
	rendue = ft_printf_aux((char *) format, conv_table, args);
	va_end(args);
	return (rendue);
}

int	printf_clr(char *color, const char *format, ...)
{
	int					rendue;
	va_list				args;
	t_conversionFuncPtr	*conv_table;

	if (format == NULL || color == NULL)
		return (-1);
	va_start(args, format);
	conv_table = make_conversion_table();
	ft_putstr(color);
	rendue = ft_printf_aux((char *) format, conv_table, args);
	ft_putstr("\033[0m");
	va_end(args);
	return (rendue);
}
