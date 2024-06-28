/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:14:04 by bachai            #+#    #+#             */
/*   Updated: 2024/06/28 13:07:45 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*(tmp++) = 0;
		n--;
	}
}
/*int	main(void)
{
	char str[] = {0,1,2,3,4,5,6};
	unsigned	int i;
	
	ft_bzero(str, 7);
	i = 0;
	while(i < 7)
	{
	printf("%d", str[i]);
	i++;
	}
}*/