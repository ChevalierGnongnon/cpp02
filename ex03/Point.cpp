/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:41:06 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/06 17:57:56 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(){
    std::cout << "Point default constructor called" << std::endl;
    this->pos_x = 0;
    this->pos_y = 0;
}

Point::~Point(){
    std::cout << "Point destructor called" << std::endl;
}

Point::Point(const int pos_x, const int pos_y){
    
}