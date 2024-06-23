/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:26:58 by bachai            #+#    #+#             */
/*   Updated: 2024/06/23 16:06:37 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (ft_strlcpy(src));
	while (src != \0 && count < (size - 1))
		dst[count] = src[count];
		count++;
	dst = '\0';
	return (ft_strlcpy(src));
}
