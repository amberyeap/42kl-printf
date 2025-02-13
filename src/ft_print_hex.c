/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayeap <ayeap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:42:41 by ayeap             #+#    #+#             */
/*   Updated: 2024/06/19 12:26:48 by ayeap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lower_hex(unsigned int n, char *base)
{
	return (ft_print_digit(n, base));
}

int	ft_print_upper_hex(unsigned int n, char *base)
{
	return (ft_print_digit(n, base));
}
