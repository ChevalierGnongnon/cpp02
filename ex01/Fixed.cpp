/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:18:53 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/05 22:18:00 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "default constructor called" << std::endl;
    this->fixed_point = 0;
}

Fixed::Fixed(const int value){
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = value << fract_bits;
}
Fixed::Fixed(const float value){
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(value *(1 << fract_bits));
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
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw){
    this->fixed_point = raw;
}

float Fixed::toFloat(void) const{
    return ((float) this->getRawBits() / (1 << this->fract_bits));
}

int Fixed::toInt(void) const{
    return (this->getRawBits() >> this->fract_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return (out);
}