/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <mben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:55:19 by mben-cha          #+#    #+#             */
/*   Updated: 2024/11/14 16:36:00 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive_itoa(int n, char *str, int *index)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		str[(*index)++] = '-';
		nb = -nb;
	}
	if (nb / 10)
		recursive_itoa(nb / 10, str, index);
	str[(*index)++] = (nb % 10) + '0';
}

int	count_digit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*pt;
	int		i;
	int		n_digit;

	i = 0;
	n_digit = count_digit(n) + 1;
	pt = (char *)malloc(n_digit * sizeof(char));
	if (pt == NULL)
		return (NULL);
	recursive_itoa(n, pt, &i);
	pt[i] = '\0';
	return (pt);
}
