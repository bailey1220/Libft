/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:04:39 by bachai            #+#    #+#             */
/*   Updated: 2024/06/16 18:44:48 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t s_len;
	size_t i;

	s_len = 0;
	while(s[s_len])
		s_len++;
	
	if(start > s_len)
		return (NULL);

	if(len > s_len - start)
		len = s_len - start;

	substr = (char*) malloc((len + 1)* sizeof(char));

	if(!substr)
		return (NULL);
	 
	i = 0;
	if(i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}