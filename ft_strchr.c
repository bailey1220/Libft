/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:00:18 by bachai            #+#    #+#             */
/*   Updated: 2024/06/12 17:25:27 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
{
	int i;
	char cc;

	i = 0;
	cc = (char)c;

	while(s[i])
	{
		if(s[i] == cc)
			return(char *) &s[i])
		i++;
	}

	if(s[i] == cc)
		return(char *) &s[i])
	return (NULL);
}
