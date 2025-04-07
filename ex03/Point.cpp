/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:41:06 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/07 12:20:10 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(){
    std::cout << "Point default constructor called" << std::endl;
	this->pos_x = Fixed(0);
	this->pos_y = Fixed(0);
}

Point::~Point(){
    std::cout << "Point destructor called" << std::endl;
}

Point::Point(Fixed x, Fixed y){
    std::cout << "Constructor called" << std::endl;
	this->pos_x = x;
	this->pos_y = y;
}

Point::Point(const Point &src){
	std::cout << "Copy constructor called" << std::endl;
	this->pos_x = src.pos_x;
	this->pos_y = src.pos_y;
}

Point	&Point::operator = (const Point &otherOne){
	if (this!= &otherOne){
		this->pos_x = otherOne.pos_x;
		this->pos_y = otherOne.pos_y;
	}
	std::cout << "copy assignment operator called" << std::endl;
	return (*this);
}

Fixed	Point::get_posX() const{
	return (this->pos_x);
}

Fixed	Point::get_posY() const{
	return (this->pos_y);
}

void	Point::set_posX(const Fixed &x){
	this->pos_x = x;
}

void	Point::set_posY(const Fixed &y){
	this->pos_y = y;
}

