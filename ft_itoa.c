/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:31:30 by bachai            #+#    #+#             */
/*   Updated: 2024/06/18 19:07:36 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int num_len(int n)
{
	int len;

	len = 0;
	if(n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char *ft_itoa(int n)
{
	int len;
	unsigned int num;
	char *str;

	len = num_len(n);
	num = n;
	if( n < 0)
		num = -n;
	
	str = malloc((len + 1) * sizeof(char));
	if(!str)
		return (NULL);
	
	str[len] = '\0';
	if(n == 0)
		str[0] = '0';

	if(n < 0)
		str[0] = '-';

	while(num != 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}