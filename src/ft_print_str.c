/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayeap <ayeap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:05:15 by ayeap             #+#    #+#             */
/*   Updated: 2024/06/19 12:09:30 by ayeap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}
