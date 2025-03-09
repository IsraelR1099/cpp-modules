/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:16:28 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 22:47:30 by israel           ###   ########.fr       */
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
	private:
		int					m_fixedPoint;
		static int const	m_fractBits = 8;
};

std::ostream	&operator<<(std::ostream &output, const Fixed &copy);
#endif
