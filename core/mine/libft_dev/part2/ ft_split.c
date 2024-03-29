/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:20:45 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/11 16:00:16 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*find_word_end(const char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	return (s);
}

static size_t	word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			s = find_word_end(s, c);
		}
	}
	return (count);
}

static void	*free_split(char **split, size_t i)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t words;
	char **split;
	const char *start;
	size_t i;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		start = s;
		s = find_word_end(s, c);
		split[i] = (char *)malloc((s - start) + 1);
		if (!split[i])
			return (free_split(split, i));
		ft_strlcpy(split[i], start, (s - start) + 1);
		i++;
	}
	split[words] = NULL;
	return (split);
}
