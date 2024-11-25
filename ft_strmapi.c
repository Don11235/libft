/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:28:38 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/08 19:02:33 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*pt;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	pt = (char *)malloc(len + 1);
	if (pt == NULL)
		return (NULL);
	while (i < len)
	{
		pt[i] = (*f)(i, s[i]);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
