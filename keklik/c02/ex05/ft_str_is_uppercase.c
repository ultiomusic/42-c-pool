/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:39:50 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/08 03:40:09 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
	return (1);
}