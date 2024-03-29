/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:26:23 by cmartin-          #+#    #+#             */
/*   Updated: 2022/05/02 17:26:26 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	if (n == 0 || !s1)
		return (0);
	i = 0;
	while ((i < n) && (*((char *)s1 + i) == *((char *)s2 + i)))
		i++;
	if (i == n)
		i--;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
