#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public:

	Contact(void);
	~Contact(void);

private:

	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkSecret;
};

#endif
