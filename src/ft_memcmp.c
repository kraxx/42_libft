/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:53:10 by jchow             #+#    #+#             */
/*   Updated: 2017/06/08 00:26:52 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((t_uc*)s1)[i] != ((t_uc*)s2)[i])
			return (((t_uc*)s1)[i] - ((t_uc*)s2)[i]);
	return (0);
}
