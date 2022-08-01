/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:39:51 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/01 09:39:56 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact();
		void searchContact();
		void print_all_contact();
		void print_one_contact(Contact contact);

	private:
		Contact _book[8];
		int _index;
};

#endif
