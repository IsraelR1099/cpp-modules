/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:12:03 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/11 21:53:29 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _damage(0)
{
	std::cout << "Constructor: " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor: " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_damage = obj._damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << _name << " attacks \"" << target << "\", causing " << this->_damage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	std::cout << "His amount of energy after attacking is: " << this->_energyPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " is repairing itself " << amount << " points" << std::endl;
	this->_hitPoints += amount;
	std::cout << "His amount of HP after repairing is: " << this->_hitPoints << std::endl;
	this->_energyPoints -= 1;
	std::cout << "His amount of energy after repairing is: " << this->_energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_hitPoints -= amount;
	std::cout << "His amount of HP after taking damage is: " << this->_hitPoints << std::endl;
}
