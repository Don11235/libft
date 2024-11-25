/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:11:11 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/06 09:46:02 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pt;
	size_t	len;

	len = ft_strlen(s1) + 1;
	pt = (char *)malloc(len * sizeof(char));
	if (pt == NULL)
		return (NULL);
	ft_strlcpy(pt, s1, len);
	return (pt);
}
