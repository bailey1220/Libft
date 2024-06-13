/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:22:29 by bachai            #+#    #+#             */
/*   Updated: 2024/06/13 15:59:39 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnst(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if(needle[0] == 0)
		return ((char *)haystack))

	while(haystack[i] && i < len)
	{
		while(haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++
			if(needle[j] == 0)
				return((char *)haystack + i));
		}
		i++;
		j = 0;

	}
return (0);
}