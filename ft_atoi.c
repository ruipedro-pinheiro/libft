/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:30:00 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/06 14:30:00 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Convertit une chaine de caracteres en entier
** @param str Chaine de caracteres a convertir
** @return int Valeur entiere de la chaine
** @details Etapes de conversion:
**          1. Skip les whitespaces (espace, tab, newline, etc.)
**          2. Detecte le signe optionnel (+/-)
**          3. Convertit les chiffres jusqu'au premier non-chiffre
** @note Whitespaces reconnus: ' ', '\t', '\n', '\v', '\f', '\r' (ASCII 9-13)
** @warning Ne gere pas l'overflow INT_MAX/INT_MIN - comportement indefini
** @see ft_isdigit pour la detection des chiffres
** @example ft_atoi("  -42abc") retourne -42
** @example ft_atoi("   +123") retourne 123
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

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
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
