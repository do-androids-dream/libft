/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdukhani <vdukhani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:45:38 by vdukhani          #+#    #+#             */
/*   Updated: 2023/09/06 12:13:23 by vdukhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	else
		return (0);
}
