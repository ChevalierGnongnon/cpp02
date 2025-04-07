/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:41:06 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/07 10:05:48 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():pos_x(0), pos_y(0){
    std::cout << "Point default constructor called" << std::endl;
}

Point::~Point(){
    std::cout << "Point destructor called" << std::endl;
}

Point::Point(float x, float y): pos_x(x), pos_y(y){
    std::cout << "Constructor called" << std::endl;
}

Point::Point(const Point &src) : pos_x(src.get_posX()), pos_y(src.get_posY()){
	std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator = (const Point &otherOne){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &otherOne)
		this.
}

int Point::get_posX() const{
	
}

int Point::get_posY() const{
	
}

