/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:34:42 by ymarji            #+#    #+#             */
/*   Updated: 2019/10/22 11:46:16 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (c - 32);
	}
	return (c);
}
