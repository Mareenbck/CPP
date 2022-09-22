#include "AForm.hpp"

AForm::AForm(void) : _name("generic"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form Default Constructor :\033[0;34m " << this->_name << " - Grade execute : " << this->_gradeToExecute << " - Grade sign : " << this->_gradeToSign << "\033[0m" << std::endl;
	return;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToExecute < 1 || gradeToSign < 1)
		throw AForm::GradeTooHighException();
	std::cout << "Form Constructor :\033[0;34m " << this->_name << " - Grade execute : " << this->_gradeToExecute << " - Grade sign : " << this->_gradeToSign << "\033[0m" << std::endl;
	return;
}

AForm::AForm(AForm const &src) : _name(src.getName()), _isSigned(src.getSign()) , _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
	std::cout << "Form Copy Constructor :\033[0;34m " << this->_name << " - Grade execute : " << this->_gradeToExecute << " - Grade sign : " << this->_gradeToSign << "\033[0m" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Form Destructor : \033[0;35m " << this->_name << " \033[0m" << std::endl;
	return;
}

AForm &AForm::operator=(AForm const &rhs)
{
	this->_isSigned = rhs.getSign();
	return *this;
}

std::string const &AForm::getName(void) const
{
	return this->_name;
}

int AForm::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

bool AForm::getSign(void) const
{
	return this->_isSigned;
}

void AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char *AForm::Exception::what() const throw()
{
	return ("AFormException");
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Form : Grade Too High");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Form : Grade Too Low");
}

const char *AForm::UnsignedFormException::what(void) const throw()
{
	return ("Form is not signed");
}

const char *AForm::FormNotFoundException::what(void) const throw()
{
	return ("\033[0;31mForm not found\033[0m");
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
	o << "Form : " << rhs.getName() << " - Signed ? ";
	if (!rhs.getSign())
		o << "⭕️" << std::endl;
	else
		o << "✅" << std::endl;
	o << "Need grade " << rhs.getGradeToSign() << " to be signed 📝 and grade " << rhs.getGradeToExecute() << " to be executed 💡." << std::endl;
	return o;
}
