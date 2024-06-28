/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:46:26 by bachai            #+#    #+#             */
/*   Updated: 2024/06/28 13:19:18 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_allocate(size_t size);
static size_t	ft_count_substr(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_index;
	size_t	word_length;

	result = ft_allocate(ft_count_substr(s, c) + 1);
	if (!s || !result)
		return (NULL);
	i = 0;
	word_index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_length = 0;
			while (s[i + word_length] && s[i + word_length] != c)
				word_length++;
			result[word_index++] = ft_substr(s + i, 0, word_length);
			i += word_length;
		}
		else
			i++;
	}
	result[word_index] = NULL;
	return (result);
}

static char	**ft_allocate(size_t size)
{
	char	**arr;

	arr = (char **)malloc((size + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (arr);
}

static size_t	ft_count_substr(const char *s, char c)
{
	size_t	count;
	size_t	i;
	int		in_substring;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	in_substring = 0;
	while (s[i])
	{
		if (s[i] != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		else if (s[i] == c)
			in_substring = 0;
		i++;
	}
	return (count);
}
