/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:51:50 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/11 22:58:54 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		explicit FragTrap(const std::string &name);
		FragTrap(const FragTrap &obj);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap &obj);
		void	highFivesGuys() const;
};
#endif
