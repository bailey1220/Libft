/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:40:16 by bachai            #+#    #+#             */
/*   Updated: 2024/06/18 12:00:44 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(const char *s1, const char *s2)
{
	char *res;
	int i;
	int j;

	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if(!res)
		return(NULL);
	
	while(s1[i])
		res[j++] = s1[i++];

	i = 0;
	while(s2[i])
	res[j++] = s2[i];

	res[j] - '\0';
	return (res);
}