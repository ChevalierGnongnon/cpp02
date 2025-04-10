/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:41:06 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 15:24:04 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0) {
	
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {
	
}

Point::Point(const Point &src) : x(src.x), y(src.y) {
	
}

Point::~Point(){
	// std::cout << "Point destructor called" << std::endl;
}

Point &Point::operator=(const Point &otherOne){
	(void) otherOne;
	return (*this);
}

Fixed	Point::getX() const{
	return (this->x);
}

Fixed	Point::getY() const{
	return (this->y);
}


