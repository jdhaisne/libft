/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_envar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhaisne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 10:56:05 by jdhaisne          #+#    #+#             */
/*   Updated: 2016/04/06 10:56:47 by jdhaisne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_envar(const char *name, t_list *env_l)
{
	char	*var;

	var = NULL;
	while (env_l != NULL && ft_strncmp(env_l->content, name,
		ft_strlenc(env_l->content, '=')) != 0)
		env_l = env_l->next;
	if (env_l == NULL)
		return (NULL);
	var = ft_strchr(env_l->content, '=');
	return (++var);
}
