/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:13:11 by salhali           #+#    #+#             */
/*   Updated: 2024/11/08 14:35:32 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h" ///// split == "salah,eddine,hali" --> salah eddine hali

static int	is_sep(char a, char c)
{
	return (a == c);
}

static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_sep(str[i], c) && (is_sep(str[i + 1], c) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*word_alloc(const char *str, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (str[i] && !is_sep(str[i], c))
		i++;
	word = malloc((i + 1) * sizeof(char));
	i = 0;
	while (str[i] && !is_sep(str[i], c))
	{
		word[i] = ((char *)str)[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_all(char **sp, int index)
{
	int	i;

	i = 0;
	while (index >= 0)
	{
		free(sp[i]);
		i--;
	}
	free(sp);
	return (NULL);
}

char	**ft_split(char const *s, char c) // s == string c == sepration
{
	char **sp;
	size_t i;

	if (!s)
		return (NULL);
	sp = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!sp)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && is_sep(*s, c))
			i++;
		if (*s && !is_sep(*s, c))
		{
			sp[i] = word_alloc(s, c);
			if (!sp[i])
				return (free_all(sp, i));
			i++;
			while (*s != '\0' && !is_sep(*s, c))
				;
			s++;
		}
	}
}
*/
