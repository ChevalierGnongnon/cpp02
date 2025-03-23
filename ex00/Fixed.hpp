/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:19:33 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/23 15:00:26 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
    private:
        int                 fixed_point;
        static const int    fract_bits = 0;
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