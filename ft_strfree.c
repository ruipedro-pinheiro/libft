/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinhier@student.42Lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:49:26 by rpinheir          #+#    #+#             */
/*   Updated: 2026/02/04 12:51:55 by rpinheir         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strfree(char **str)
{
	int	i;

	if(!str)
        return (1); 
	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}
