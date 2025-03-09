/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:30:21 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:39:49 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : m_name(name), m_weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	std::cout << m_name << " attacks with their " << m_weapon->getType() <<
	std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}

