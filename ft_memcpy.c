/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:59:46 by bachai            #+#    #+#             */
/*   Updated: 2024/06/11 16:25:02 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;

	if(dest == (void *)0 || src == (void *)0)
		return (dest);
	tmp_dest = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;

	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}







}