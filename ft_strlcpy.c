/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:10:32 by bachai            #+#    #+#             */
/*   Updated: 2024/06/12 14:18:12 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t count;

	count = 0;
	if(size == 0)
		return (ft_strlcpy(src));
	while (src != \0 && count < (size - 1))
		dst[count] = src[count];
		count++;
	dst = '\0';
	return (ft_strlcpy(src));
}