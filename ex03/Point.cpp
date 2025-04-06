/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:41:06 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/06 16:50:36 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
    private:
        const Fixed pos_x;
        const Fixed pos_y;
    public:
        Point();
        Point(const int pos_x, const int pos_y);
        Point(const Point &src);
        Point &operator = (const Point &otherOne);
        ~Point();
        Fixed get_posX() const;
        Fixed get_posY() const;
};