/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:38:17 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/14 17:54:26 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	i = 0;
	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && pt1[i] == pt2[i])
		i++;
	if (i == n)
		return (0);
	return (pt1[i] - pt2[i]);
}
