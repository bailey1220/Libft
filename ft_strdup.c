/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:46:44 by bachai            #+#    #+#             */
/*   Updated: 2024/06/16 17:00:18 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *s1)
{
	char *dest;
	size_t i;
	size_t len;

	len = 0;
	while (s1[len] != '\0')
		len++;

	dest = (char*) malloc((len + 1) * sizeof(char));
	if(!dest)
		return (NULL);

	i = 0; 
	while(i < len)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[len] = '\0';

	return (dest);
}