/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:42 by naharumi          #+#    #+#             */
/*   Updated: 2024/10/25 14:14:23 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*dest;

	dest = NULL;
	if (nmemb == 0 || size == 0)
		return (ft_memset(dest, 0, 0));
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	total = nmemb * size;
	dest = malloc(total);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, total);
	return (dest);
}
