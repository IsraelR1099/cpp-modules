/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:17:54 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 15:05:46 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include <limits>
#include <cstdlib>
#include <iomanip>

class	Contact
{
	public:
		Contact();
		Contact(const std::string &name, const std::string &last, const std::string &nick,
				unsigned int number, const std::string &dark, int i);
		~Contact();
		void			ft_set(std::string name, std::string last, std::string nick,
						unsigned int number, std::string dark, int i);
		const std::string		&ft_getFirstName();
		const std::string		&ft_getLastName();
		const std::string		&ft_getNickName();
		unsigned int			ft_getPhoneNumber();
		const std::string		&ft_getDarkSecret();
		void					ft_get();
	private:
		std::string		m_first_name;
		std::string		m_last_name;
		std::string		m_nickname;
		unsigned int	m_phone_number;
		std::string		m_dark_secret;
		int				m_index;
};

#endif
