/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:56 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 23:22:14 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : m_name("Zombie")
{
}

Zombie::Zombie(const std::string &name) : m_name(name)
{
}

Zombie::~Zombie()
{
	std::cout << m_name << " ha muerto." << std::endl;
}

void	Zombie::announce() const
{
	std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &name)
{
	m_name = name;
}
