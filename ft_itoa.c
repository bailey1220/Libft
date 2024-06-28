/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:17:40 by bachai            #+#    #+#             */
/*   Updated: 2024/06/28 11:44:01 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	num;
	char			*str;

	len = num_len(n);
	num = n;
	if (n < 0)
		num = -n;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (num != 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
// int	main(void)
// {
// 	// ft_itoa(-2147483648);
// 	printf("%s\n", ft_itoa(-2147483648));
// }