/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:17:54 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 15:09:15 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <limits>
#include <cstdlib>
#include <iomanip>

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	ft_setContact(const std::string &line, size_t index);
		void	ft_getContact();
		void	ft_show();
	private:
		Contact	m_contacts[8];
		size_t	m_nbrContacts;
};

std::string		ft_getString(const std::string &msg);
unsigned int	ft_phone_number();
#endif
