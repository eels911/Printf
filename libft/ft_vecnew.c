/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 11:50:01 by wzei              #+#    #+#             */
/*   Updated: 2019/03/12 04:03:23 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	*ft_vecnew(void)
{
	t_vector	*ret;

	ret = (t_vector*)ft_memalloc(sizeof(t_vector));
	if (ret)
	{
		ret->data = NULL;
		ret->size = 0;
		ret->count = 0;
	}
	return (ret);
}
