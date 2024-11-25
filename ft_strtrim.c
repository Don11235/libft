/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:55:18 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/15 11:49:21 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	beginning(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(set);
	while (i < len1)
	{
		j = 0;
		while (j < len2)
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			j++;
		}
		if (j == len2)
			return (i);
	}
	return (i);
}

static size_t	end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = ft_strlen(s1);
	if (i == 0)
		return (0);
	i--;
	len = ft_strlen(set);
	while (i)
	{
		j = 0;
		while (j < len)
		{
			if (s1[i] == set[j])
			{
				i--;
				break ;
			}
			j++;
		}
		if (j == len)
			return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pt;
	size_t	beg;
	size_t	en;

	if (s1 == NULL || set == NULL)
		return (NULL);
	beg = beginning(s1, set);
	en = end(s1, set);
	if (beg > en)
		return (ft_strdup(""));
	if (en == 0 && beg == 0)
		return (ft_strdup(""));
	else
	{
		pt = (char *)malloc((en - beg + 2) * sizeof(char));
		if (pt == NULL)
			return (NULL);
		ft_strlcpy(pt, s1 + beg, en - beg + 2);
		return (pt);
	}
}
