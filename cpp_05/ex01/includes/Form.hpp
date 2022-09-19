#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &src);
		~Form(void);

		Form &operator=(Form const &rhs);

		std::string const &getName(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		bool getSign(void) const;

		void beSigned(Bureaucrat const &b);

		class Exception : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooHighException : public Form::Exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public Form::Exception
		{
			public:
				virtual const char *what(void) const throw();
		};

	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
