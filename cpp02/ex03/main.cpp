/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:43:21 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/06/20 16:32:35 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	const a(0, 0);
	Point	const b(4, 0);
	Point	const c(2, 4);
	Point	const point(2, 2);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangule" << std::endl;
	else
		std::cout << "The point is not inside the triangule" << std::endl;
	return 0;
}
