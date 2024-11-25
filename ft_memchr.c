/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:08:36 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/15 15:23:29 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*pt;

	ch = (unsigned char)c;
	pt = (const unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (--n && *pt != ch)
		pt++;
	if (*pt == ch)
		return ((void *)pt);
	return (NULL);
}
