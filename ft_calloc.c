/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:42 by naharumi          #+#    #+#             */
/*   Updated: 2024/10/23 18:48:47 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*dest;

	total = nmemb * size;
	if (total > (size_t)-1)
		return (NULL);
	dest = malloc(total);
	if (!dest)
		return (0);
	ft_memset(dest, 0, total);
	return (dest);
}
