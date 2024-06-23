/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:25:56 by bachai            #+#    #+#             */
/*   Updated: 2024/06/23 16:06:34 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	count;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	count = 0;
	if (size == 0)
		return (size + src_size);
	while (size[count] != '\0' && count + dst_size < (size -1))
	{
		dst_size[count] = src_size[count];
		count++;
	}
	if (dst_size < size)
		return (src_size + dst_size);
	return (size + src_size);
}
