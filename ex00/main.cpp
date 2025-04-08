/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:02:45 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 14:12:02 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	// Fixed a;


	// std::cout << "Raw value with default constructor : " << a.getRawBits() << std::endl;
	// a.setRawBits(2);
	// std::cout << "Raw value after setting : " << a.getRawBits() << std::endl;
	// Fixed b = a;
	// std::cout << "Raw value of b after using copy constructor : " << b.getRawBits() << std::endl;
	// Fixed c;
	// c = a;
	// std::cout << "Raw value aftr using copy assignment operator : " << c.getRawBits() << std::endl;

	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}