/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:28:36 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 14:19:49 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(4), d(6);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
	
    std::cout << a << std::endl;
    std::cout << b << std::endl;
	
    std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "Max between c and d " << Fixed::max(c, d) << std::endl;
	std::cout << "Min between c and d " << Fixed::min(c, d) << std::endl;

	std::cout << "c + d: " << c + d << std::endl;
    std::cout << "c - d: " << c - d << std::endl;
    std::cout << "c * d: " << c * d << std::endl;
    std::cout << "c / d: " << c / d << std::endl;

    return (0);
}