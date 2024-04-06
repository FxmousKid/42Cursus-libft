/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:48:20 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/05 20:00:50 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_printf_aux(char *str, t_conversionFuncPtr *conv_table, va_list args)
{
	int		counter;
	t_args	s_args;

	counter = 0;
	s_args = (t_args){.args = args, .rendue = 0};
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

int	ft_printf(const char *str, ...)
{
	int					rendue;
	va_list				args;
	t_conversionFuncPtr	*conv_table;

	va_start(args, str);
	conv_table = make_conversion_table();
	rendue = ft_printf_aux((char *) str, conv_table, args);
	va_end(args);
	return (rendue);
}

int main(void)
{
	char *s = malloc(12);
	int y = printf("'%p'\n", s);
	(void)y;
	return (0);
}
