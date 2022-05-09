/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:03:00 by cmartin-          #+#    #+#             */
/*   Updated: 2022/05/03 15:03:02 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		cpt;
	char	*str;

	cpt = 0;
	i = 0;
	while (s1[i])
	{
		if (!(ft_chr(set, s1[i])))
			cpt++;
		i++;
	}
	str = malloc(sizeof(char) * cpt + 1);
	if (!str)
		return (0);
	i = 0;
	cpt = 0;
	while (s1[i])
	{
		if (!(ft_chr(set, s1[i])))
			str[cpt++] = s1[i];
		i++;
	}
	str[cpt] = '\0';
	return (str);
}
