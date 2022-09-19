#include "Form.hpp"

Form::Form(void) : _name("generic"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default Constructor :\033[0;34m " << this->_name << " - Grade execute : " << this->_gradeToExecute << " - Grade sign : " << this->_gradeToSign << "\033[0m" << std::endl;
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExecute < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
	std::cout << "Constructor :\033[0;34m " << this->_name << " - Grade execute : " << this->_gradeToExecute << " - Grade sign : " << this->_gradeToSign << "\033[0m" << std::endl;
	return;
}

Form::Form(Form const &src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
	std::cout << "Copy Constructor :\033[0;34m " << this->_name << " - Grade execute : " << this->_gradeToExecute << " - Grade sign : " << this->_gradeToSign << "\033[0m" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor : \033[0;35m " << this->_name << " \033[0m" << std::endl;
	return;
}

Form &Form::operator=(Form const &rhs)
{
	this->_isSigned = rhs.getSign();
	// this->_gradeToExecute = src.getGradeToExecute();
	// this->_gradeToExecute = rhs.getGradeToSign();
	return *this;
}

std::string const &Form::getName(void) const
{
	return this->_name;
}

int Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

bool Form::getSign(void) const
{
	return this->_isSigned;
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char *Form::Exception::what() const throw()
{
	return ("FormException");
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form : " << rhs.getName() << " - Signed ? ";
	if (!rhs.getSign())
		o << "⭕️" << std::endl;
	else
		o << "✅" << std::endl;
	o << "Need grade " << rhs.getGradeToSign() << " to be signed 📝 and grade " << rhs.getGradeToExecute() << " to be executed 💡." << std::endl;
	return o;
}
