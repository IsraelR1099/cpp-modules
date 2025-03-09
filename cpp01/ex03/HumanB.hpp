/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:49:17 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:39:55 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		explicit HumanB(const std::string &name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &weapon);
	private:
		std::string	m_name;
		Weapon		*m_weapon;
};
#endif
