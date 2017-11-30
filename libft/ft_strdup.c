/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amansour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:14:41 by amansour          #+#    #+#             */
/*   Updated: 2017/05/01 11:38:59 by amansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	char *str;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (str)
		ft_strcpy(str, s);
	return (str);
}
