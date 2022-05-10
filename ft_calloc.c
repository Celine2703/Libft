/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:52:36 by cmartin-          #+#    #+#             */
/*   Updated: 2022/05/02 17:52:38 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t size, size_t espace)
{
	void		*tab;
	size_t		cpt;
	size_t		taille;

	taille = espace * size;
	if (size == 0 || espace == 0)
		return (0);
	if (taille / size != espace)
		return (0);
	cpt = 0;
	tab = malloc(taille);
	if (tab == 0)
		return (0);
	while (cpt < taille)
	{
		((char *)tab)[cpt] = 0;
		cpt ++;
	}
	return (tab);
}
