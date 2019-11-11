/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudouy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:24:14 by acoudouy          #+#    #+#             */
/*   Updated: 2019/11/04 18:44:18 by acoudouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnchr(const char *s, int c, size_t n)
{
	int		i;
	char	*pos;

	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == c)
			return ((char *)s + i);
		else
			i++;
	}
	return (0);
}
