/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhaisne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:04:57 by jdhaisne          #+#    #+#             */
/*   Updated: 2015/12/02 17:35:39 by jdhaisne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t destsize;
	size_t i;

	destsize = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[destsize + i] = src[i];
		i++;
	}
	return (dest);
}
