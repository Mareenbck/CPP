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
		// Contact get_contact(int i) const;

	private:
		Contact _book[8];
		int _index;
};

#endif
