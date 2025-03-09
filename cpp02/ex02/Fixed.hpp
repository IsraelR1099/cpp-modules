/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:16:28 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 22:57:03 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		explicit Fixed(const int value);
		explicit Fixed(const float value);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
		Fixed	&operator=(const Fixed &copy);
		bool	operator>(const Fixed &copy) const;
		bool	operator>=(const Fixed &copy) const;
		bool	operator<(const Fixed &copy) const;
		bool	operator<=(const Fixed &copy) const;
		bool	operator==(const Fixed &copy) const;
		bool	operator!=(const Fixed &copy) const;
		Fixed	operator+(const Fixed &copy) const;
		Fixed	operator-(const Fixed &copy) const;
		Fixed	operator*(const Fixed &copy) const;
		Fixed	operator/(const Fixed &copy) const;
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static Fixed	min(Fixed &f1, Fixed &f2);
		static Fixed	min(const Fixed &f1, const Fixed &f2);
		static Fixed	max(Fixed &f1, Fixed &f2);
		static Fixed	max(const Fixed &f1, const Fixed &f2);
	private:
		int					m_fixedPoint;
		static int const	m_fractBits = 8;
};

std::ostream	&operator<<(std::ostream &output, const Fixed &copy);
#endif
