/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:09:35 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:49:03 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <sstream>

class	Harl
{
	public:
		void	complain(const std::string &level);
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
};
#endif
