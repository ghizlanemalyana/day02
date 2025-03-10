/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:55:29 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/24 18:03:53 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <stdint.h>


class Fixed{
	private:
		int num; //An integer to store the fixed-point number value.
		static const int FractionalPartBits; //A static constant integer to store the number of fractional bits.
	public:
		Fixed(); //A default constructor that initializes the fixed-point number value to 0.
		Fixed(const Fixed& other);// copy constructor
		Fixed& operator=(const Fixed& other);//A copy assignment operator overload.
		~Fixed();
		int getRawBits( void ) const;//that returns the raw value of the fixed-point value
		void setRawBits( int const raw );//that sets the raw value of the fixed-point number
};


#endif
/*
• Private members:
◦ An integer to store the fixed-point number value.
◦ A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.


• Public members:
◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.*/