/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:18:06 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:45:24 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string.h>
# include <string>
# include <iostream>

class	Weapon
{
	public:
		explicit Weapon(const std::string &name);
		~Weapon() {};
		const std::string	&getType();
		void				setType(const std::string &name);
	private:
		std::string	m_type;
};
#endif
