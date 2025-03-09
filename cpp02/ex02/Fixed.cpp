/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:40:53 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 23:06:06 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : m_fixedPoint(copy.m_fixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	m_fixedPoint = raw;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	m_fixedPoint = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	m_fixedPoint = value << m_fractBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	m_fixedPoint = roundf(value * (1 << m_fractBits));
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(m_fixedPoint) / (1 << m_fractBits));
}

int	Fixed::toInt() const
{
	return (static_cast<int>(roundf(static_cast<float>(m_fixedPoint) / (1 << m_fractBits))));
}

std::ostream	&operator<<(std::ostream &output, const Fixed &copy)
{
	output << copy.toFloat();
	return (output);
}

bool	Fixed::operator>(const Fixed &copy) const
{
	return (m_fixedPoint > copy.m_fixedPoint);
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	return (m_fixedPoint >= copy.m_fixedPoint);
}

bool	Fixed::operator<(const Fixed &copy) const
{
	return (m_fixedPoint < copy.m_fixedPoint);
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	return (m_fixedPoint <= copy.m_fixedPoint);
}

bool	Fixed::operator==(const Fixed &copy) const
{
	return (m_fixedPoint == copy.m_fixedPoint);
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	return (m_fixedPoint != copy.m_fixedPoint);
}

Fixed	Fixed::operator+(const Fixed &copy) const
{
	return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	return (Fixed(this->toFloat() - copy.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &copy) const
{
	if (copy.toFloat() == 0)
	{
		std::cout << "Error: Division by zero" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed	Fixed::operator++()
{
	++m_fixedPoint;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	const Fixed	temp(*this);
	++(*this);
	return (temp);
}

Fixed	Fixed::operator--()
{
	--m_fixedPoint;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	const Fixed	temp(*this);
	--(*this);
	return (temp);
}

Fixed	Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (Fixed(f2));
	return (Fixed(f1));
}

Fixed	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (Fixed(f2));
	return (Fixed(f1));
}

Fixed	Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (Fixed(f1));
	return (Fixed(f2));
}

Fixed	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return (Fixed(f1));
	return (Fixed(f2));
}
