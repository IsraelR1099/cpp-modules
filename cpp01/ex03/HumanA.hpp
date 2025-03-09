/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:46:59 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:33:11 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA
{
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		void	attack();
	private:
		std::string	m_name;
		Weapon		&m_weapon;
};
#endif
