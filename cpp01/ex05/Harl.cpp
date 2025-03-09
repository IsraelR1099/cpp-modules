/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:12:44 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:49:48 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(const std::string &level)
{
	typedef void		(Harl::*function)(void);
	function			array[4];
	std::istringstream	value(level);
	int					lvl;
	Harl				test;

	array[0] = &Harl::debug;
	array[1] = &Harl::info;
	array[2] = &Harl::warning;
	array[3] = &Harl::error;
	value >> lvl;
	(lvl >= 1 && lvl <= 4) ? (test.*array[lvl - 1])() : (test.*array[3])();
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
