/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:19:42 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:45:19 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &name) : m_type(name)
{
}

const std::string	&Weapon::getType()
{
	const std::string	&ref = m_type;
	return (ref);
}

void	Weapon::setType(const std::string &name)
{
	m_type = name;
}
