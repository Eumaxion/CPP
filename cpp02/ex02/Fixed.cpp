/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 19:58:44 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/22 20:34:50 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


//CONSTRUCTORS

Fixed::Fixed()
{
	_rawBits = 0;
}

Fixed::Fixed(const int value)
{
	_rawBits = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed()
{
}

//ASSIGNMENT

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_rawBits = other._rawBits;
	return *this;
}

//COMPARISONS

bool Fixed::operator>(const Fixed &other) const
{
	return _rawBits > other._rawBits;
}

bool Fixed::operator<(const Fixed &other) const
{
	return _rawBits < other._rawBits;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return _rawBits >= other._rawBits;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return _rawBits <= other._rawBits;
}

bool Fixed::operator==(const Fixed &other) const
{
	return _rawBits == other._rawBits;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return _rawBits != other._rawBits;
}

//ARITHMETIC

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits + other._rawBits;
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits - other._rawBits;
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result._rawBits =
		(_rawBits * other._rawBits) >> _fractionalBits;
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;

	if (other._rawBits == 0)
	{
		std::cerr << "Error: division by zero" << std::endl;
		return result;
	}

	result._rawBits =
		(_rawBits << _fractionalBits) / other._rawBits;

	return result;
}


//INCREMENT / DECREMENT

Fixed &Fixed::operator++()
{
	++_rawBits;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	++_rawBits;
	return old;
}

Fixed &Fixed::operator--()
{
	--_rawBits;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);

	--_rawBits;

	return old;
}

//MIN / MAX

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

//CONVERSIONS

float Fixed::toFloat(void) const
{
	return (float)_rawBits / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _rawBits >> _fractionalBits;
}

//GET / SET

int Fixed::getRawBits(void) const
{
	return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

//OUTPUT OPERATOR

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}