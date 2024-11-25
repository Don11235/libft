/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:26:22 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/15 15:23:43 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*tmp;

	x = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = x;
	return (s);
}
