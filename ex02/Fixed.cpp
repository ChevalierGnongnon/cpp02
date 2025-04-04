/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:28:29 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/04 11:32:51 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::~Fixed(){
	std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src){
	this->fixed_point = src.fixed_point;
	std::cout << "copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &otherOne){
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &otherOne){
		this->fixed_point= otherOne.fixed_point;
	}
		return (*this);
	}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw){
	this->fixed_point = raw;
}