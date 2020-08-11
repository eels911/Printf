/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 01:40:40 by wzei              #+#    #+#             */
/*   Updated: 2018/12/27 17:41:31 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*uptr_dst;
	unsigned char	*uptr_src;
	size_t			iter;

	uptr_dst = (unsigned char*)dst;
	uptr_src = (unsigned char*)src;
	iter = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (iter < n)
	{
		uptr_dst[iter] = uptr_src[iter];
		iter++;
	}
	return (dst);
}
