/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 11:53:03 by wzei              #+#    #+#             */
/*   Updated: 2019/09/24 21:12:02 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vecadd(t_vector *v, void *e, unsigned int e_sz)
{
	void	**tmp;

	if (v->size == 0)
	{
		v->size = 10;
		v->data = malloc(sizeof(void *) * v->size);
		ft_memset((v->data), '\0', sizeof(void *) * v->size);
	}
	if (v->size == v->count)
	{
		v->size *= 2;
		tmp = malloc(sizeof(void *) * v->size);
		ft_memset(tmp, '\0', sizeof(void *) * v->size);
		ft_memcpy(tmp, v->data, sizeof(void *) * v->count);
		free(v->data);
		v->data = tmp;
	}
	ft_memcpy(v->data + v->count, e, e_sz);
	v->count++;
}
