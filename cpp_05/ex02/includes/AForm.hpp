#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const &src);
		virtual ~AForm(void);

		AForm &operator=(AForm const &rhs);

		std::string const &getName(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		bool getSign(void) const;

		void beSigned(Bureaucrat const &b);
		virtual void execute(Bureaucrat const &executor) const = 0;

		class Exception : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooHighException : public AForm::Exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public AForm::Exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class UnsignedFormException : public AForm::Exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif
