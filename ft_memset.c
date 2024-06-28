/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:22:47 by bachai            #+#    #+#             */
/*   Updated: 2024/06/28 11:45:08 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len > 0)
	{
		*(tmp++) = (unsigned char)c;
		len--;
	}
	return (b);
}
/*int	main(void)
{
	char dest[50];
	char ch = 'a';

	printf("%s", ft_memset(dest, ch, 20));
}*/