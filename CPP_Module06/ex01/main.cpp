/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:36:37 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/07/22 17:08:55 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Serializer.hpp"

int main(){
    
    Data *src = new Data();
    uintptr_t rawSrc = Serializer::serialize(src);
    Data *dest = Serializer::deserialize(rawSrc);

    std::cout << "Source: " << src->getName() << "\n";
    std::cout << "Serialized and Deserialized : " << dest->getName() << "\n";
    std::cout << &src << "\n" << &dest << "\n" << rawSrc << std::endl;
    delete src;

    return 0;
}
