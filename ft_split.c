/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:37:51 by naharumi          #+#    #+#             */
/*   Updated: 2024/10/23 17:35:50 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*get_word(char const *s, char c)
{
	int		i;
	int		len;
	char	*str;

	len = word_len(s, c);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = *s;
		s++;
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**arr;

	if (!s)
		return (0);
	count = word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			arr[i] = get_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	arr[count] = 0;
	return (arr);
}
