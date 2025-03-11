/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:12:03 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/10 21:58:55 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("default"), m_hitPoints(10), m_energyPoints(10), m_damage(0)
{
	std::cout << "Constructor de: " << m_name << " llamado" << std::endl;
}


ClapTrap::ClapTrap(const std::string &name) : m_name(name),
	m_hitPoints(10), m_energyPoints(10), m_damage(0)
{
	std::cout << "Constructor de: " << m_name << " llamado" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor de: " << m_name << " llamado" << std::endl;
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
	m_name = obj.m_name;
	m_hitPoints = obj.m_hitPoints;
	m_energyPoints = obj.m_energyPoints;
	m_damage = obj.m_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (m_energyPoints == 0)
	{
		std::cout << m_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << m_name << " attacks " << target << ", causing " << m_damage << " points of damage!" << std::endl;
	m_energyPoints -= 1;
	std::cout << "His amount of energy after attacking is: " << m_energyPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energyPoints == 0)
	{
		std::cout << m_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << m_name << " is repairing itself " << amount << " points" << std::endl;
	m_hitPoints += amount;
	std::cout << "His amount of HP after repairing is: " << m_hitPoints << std::endl;
	m_energyPoints -= 1;
	std::cout << "His amount of energy after repairing is: " << m_energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (m_energyPoints == 0)
	{
		std::cout << m_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << m_name << " takes " << amount << " points of damage" << std::endl;
	m_hitPoints -= amount;
	std::cout << "His amount of HP after taking damage is: " << m_hitPoints << std::endl;
}
