/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:28:29 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 14:18:55 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    // std::cout << "default constructor called" << std::endl;
    this->fixed_point = 0;
}

Fixed::Fixed(const int value){
    // std::cout << "Int constructor called" << std::endl;
    this->fixed_point = value << fract_bits;
}
Fixed::Fixed(const float value){
    // std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(value *(1 << fract_bits));
}

Fixed::~Fixed(){
    // std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src){
    this->fixed_point = src.fixed_point;
    // std::cout << "copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &otherOne){
    // std::cout << "copy assignment operator called" << std::endl;
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

bool Fixed::operator<=(const Fixed &otherOne) const{
	return (this->fixed_point <= otherOne.fixed_point);
}

bool Fixed::operator<(const Fixed &otherOne) const{
	return (this->fixed_point < otherOne.fixed_point);
}

bool	Fixed::operator>=(const Fixed &otherOne) const{
	return (this->fixed_point >= otherOne.fixed_point);
}

bool	Fixed::operator>(const Fixed &otherOne) const{
	return (this->fixed_point > otherOne.fixed_point);
}

bool	Fixed::operator!=(const Fixed &otherOne) const{
	return (this->fixed_point != otherOne.fixed_point);
}

bool 	Fixed::operator==(const Fixed &otherOne) const{
	return (this->fixed_point == otherOne.fixed_point);
}

//arithmethic operators
Fixed	Fixed::operator+(const Fixed &otherOne) const{
	Fixed	newOne;
	long	res;

	res = (long)this->fixed_point + (long)otherOne.fixed_point;
	if (res > 2147483647)
	{
		std::cerr << "Error: int overflow !" << std::endl;
		return (Fixed());
	}
	newOne.setRawBits((int) res);
	return (newOne);
}

Fixed	Fixed::operator-(const Fixed &otherOne) const{
	Fixed	newOne;
	long	res;

	res = (long)this->fixed_point - (long)otherOne.fixed_point;
	if (res < -2147483648)
	{
		std::cerr << "Error: int underflow !" << std::endl;
		return (Fixed());
	}
	newOne.setRawBits((int) res);
	return (newOne);
}

Fixed	Fixed::operator*(const Fixed &otherOne) const{
	Fixed	newOne;
	long	res;

	res = ((long)this->fixed_point * (long)otherOne.fixed_point) >> this->fract_bits;
	if (res > 2147483647)
	{
		std::cerr << "Error: int overflow !" << std::endl;
		return (Fixed());
	}
	if (res < -2147483648)
	{
		std::cerr << "Error: int underflow !" << std::endl;
		return (Fixed());
	}
	newOne.setRawBits((int) res);
	return (newOne);
}

Fixed	Fixed::operator/(const Fixed &otherOne) const{
	Fixed	newOne;
	long	res;

	if (otherOne.getRawBits() == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return Fixed();
    }
	res = (long)this->fixed_point * 256;
	res /= (long)otherOne.fixed_point;
	if (res > 2147483647)
	{
		std::cerr << "Error: int overflow !" << std::endl;
		return (Fixed());
	}
	newOne.setRawBits((int)res);
	return (newOne);
}

//increment/decrement operators
Fixed	&Fixed::operator++(){
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed tmp(*this);
	
	this->fixed_point++;
	return (tmp);
}

Fixed	&Fixed::operator--(){
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed tmp(*this);
		
	this->fixed_point--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return (out);
}

