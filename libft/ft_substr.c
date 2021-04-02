/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:31:06 by ymarji            #+#    #+#             */
/*   Updated: 2021/04/02 19:29:58 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ab;
	size_t		i;

	i = 0;
	if (s == 0)
		return (NULL);
	if (start > len)
		return (ft_strdup(""));
	ab = (char *)malloc((len + 1) * sizeof(char));
	if (ab == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		ab[i] = s[start + i];
		i++;
	}
	ab[i] = '\0';
	return (ab);
}