/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_isalpha_maj.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piquerue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:08:42 by piquerue          #+#    #+#             */
/*   Updated: 2017/08/22 19:24:38 by piquerue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_char_isalpha_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}