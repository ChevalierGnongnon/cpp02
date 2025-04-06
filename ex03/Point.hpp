/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:24:52 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/06 17:29:20 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
    private:
        const int pos_x;
        const int pos_y;
    public:
        Point();
        Point(const int pos_x, const int pos_y);
        Point(const Point &src);
        Point &operator = (const Fixed &otherOne);
        ~Point();
        int get_posX() const;
        int get_posY() const;
};

