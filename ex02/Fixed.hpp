/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:28:33 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/04 11:31:32 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
    private:
        int                 fixed_point;
        static const int    fract_bits = 8;
    public:
        //default constructor
        Fixed();
        //copy constructor
        Fixed(const Fixed &src);
        //copy assignment operator
        Fixed &operator = (const Fixed &otherOne);
        //destructor
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif