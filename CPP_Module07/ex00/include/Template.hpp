/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:09:39 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/24 12:13:35 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T> void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T	min(T &a, T &b)
{
	if (a > b)
		return (b);
	return (a);
}

template <typename T> T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
