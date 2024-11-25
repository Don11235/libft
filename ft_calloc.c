/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:00:11 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/22 16:09:32 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	pt = malloc(count * size);
	if (pt == NULL)
		return (NULL);
	ft_memset(pt, 0, count * size);
	return (pt);
}
