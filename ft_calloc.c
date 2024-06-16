/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:26:51 by bachai            #+#    #+#             */
/*   Updated: 2024/06/16 16:45:27 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	size_t i;

	i = 0;
	tmp = malloc(count * size);

	if(!tmp)
		return (NULL);

	while(i < count * size)
		tmp[i++] = 0;
	return (tmp);
}