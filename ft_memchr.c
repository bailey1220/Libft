/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:44:56 by bachai            #+#    #+#             */
/*   Updated: 2024/06/13 12:18:39 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char c;
	size_t i;

	str = (unsigend char *)str;
	c = (unsigned char )c;
	i = 0;

	while(i < n)
	{
		if(str[i] == c)
			return ((void *)&str[i]);
		i++
	}
	return(NULL);
}