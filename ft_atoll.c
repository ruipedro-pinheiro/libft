/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinhier@student.42Lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:55:10 by rpinheir          #+#    #+#             */
/*   Updated: 2026/02/04 15:55:12 by rpinheir         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *str, bool *overflow)
{
	long long	i;
	long long	sign;
	long long	result;

	*overflow = false;
	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (LLONG_MAX - (str[i] - '0')) / 10)
			return (*overflow = true, result);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
