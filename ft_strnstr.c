/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:34:11 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/17 12:39:09 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystck, const char *needle, size_t len)
{
	size_t		len_needle;

	len_needle = ft_strlen(needle);
	if (!haystck && !len)
		return (NULL);
	if (len_needle == 0)
		return ((char *)haystck);
	while (*haystck && len)
	{
		if (ft_strncmp(haystck, needle, len_needle) == 0 && len >= len_needle)
			return ((char *)haystck);
		haystck++;
		len--;
	}
	return (NULL);
}
