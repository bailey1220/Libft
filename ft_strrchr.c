/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:26:10 by bachai            #+#    #+#             */
/*   Updated: 2024/06/13 11:42:57 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	unsigned int i;
	char cc;
	char *res;

	i = o;
	cc = (char)c;
	res = NULL;

	while(s[i])
	{
		if(s[i] == cc)
			res = (char *)&s[i];
		i++;
	}

	if(s[i] == cc)
		res = (char *)&s[i];
	return(res);
}