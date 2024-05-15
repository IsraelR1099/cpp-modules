/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:19:42 by irifarac          #+#    #+#             */
/*   Updated: 2023/06/02 21:00:22 by irifarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const name)
{
	this->type = name;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string	&Weapon::getType(void)
{
	std::string	&ref = type;
	return (ref);
}

void	Weapon::setType(std::string const name)
{
	this->type = name;
}
