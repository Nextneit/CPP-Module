/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:17:23 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/10/16 18:48:11 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Base.hpp"
#include "./include/A.hpp"
#include "./include/B.hpp"
#include "./include/C.hpp"

int	main()
{
	Base *a = generate();
	identify(a);
	identify(*a);
	delete a;
}
