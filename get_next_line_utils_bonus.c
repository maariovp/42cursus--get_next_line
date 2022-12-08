/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavicent <mavicent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:41:35 by mavicent          #+#    #+#             */
/*   Updated: 2022/12/08 10:38:49 by mavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index] != c)
	{
		if (s[index] == '\0')
			return (NULL);
		index++;
	}
	return ((char *)s + index);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_index;
	size_t	s2_index;
	size_t	len;
	char	*final;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	final = malloc(sizeof(char) * (len));
	if (!final)
		return (NULL);
	s1_index = 0;
	s2_index = 0;
	while (s1[s1_index] != '\0')
	{
		final[s1_index] = s1[s1_index];
		s1_index++;
	}
	while (s2[s2_index] != '\0')
		final[s1_index++] = s2[s2_index++];
	final[s1_index] = '\0';
	return (final);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*final;
	size_t	len;
	size_t	index;

	len = size * nmemb;
	final = malloc(len);
	if (!final)
		return (NULL);
	index = 0;
	while (len > 0)
	{
		final[index++] = 0;
		len--;
	}
	return ((void *)final);
}
