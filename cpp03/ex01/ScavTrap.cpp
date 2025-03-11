/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:11:48 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/11 22:54:14 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("defaultScavTrap")
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap: " << this->_name << " copied" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout << _name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap: " << _name << " attacks \"" << target << "\", causing " << _damage << " points of damage!" << std::endl;
	_energyPoints -= 1;
	std::cout << "His amount of energy after attacking is: " << _energyPoints << std::endl;
}



void	ScavTrap::guardGate() const
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
