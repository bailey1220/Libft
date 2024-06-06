/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:30:32 by bachai            #+#    #+#             */
/*   Updated: 2024/06/06 14:24:02 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

void*ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp;
    
    tmp = (unsigned char *)b;
    
    while(len > 0)
    {
        *(tmp++) = (unsigned char)c;
        len--;
    }
    return (b);

}