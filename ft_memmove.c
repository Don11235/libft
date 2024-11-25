/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:56:39 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/22 16:08:46 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp1;
	const unsigned char	*tmp2;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	tmp1 = (unsigned char *)dst;
	tmp2 = (const unsigned char *)src;
	if (dst > src)
	{
		while (n--)
			tmp1[n] = tmp2[n];
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, n));
}
