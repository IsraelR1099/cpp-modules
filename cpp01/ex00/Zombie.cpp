/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:27:24 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 23:05:23 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &str) : m_name(str)
{
}

Zombie::~Zombie()
{
	std::cout << "Rick Grimes mato a: " << this->m_name << std::endl;
}

void	Zombie::announce() const
{
	std::cout << m_name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
