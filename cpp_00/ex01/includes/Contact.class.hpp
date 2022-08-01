/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:39:48 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/01 09:39:49 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void set_contact();
		std::string input(std::string str);
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string get_nickname(void);
		std::string get_phoneNumber(void);
		std::string get_darkSecret(void);
		// void displayInfo()
		//std::string getName(int nb)

	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkSecret;
};

#endif
