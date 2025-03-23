/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:18:53 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/23 14:33:22 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Fixed has been created" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Fixed has been destroyed" << std::endl;
}

Fixed::Fixed(const Fixed &src){
    this->fixed_point = src.fixed_point;
}

Fixed &Fixed::operator=(const Fixed &otherOne){
    if (this != &otherOne){
        this->fixed_point= otherOne.fixed_point;
    }
    return (*this);
}