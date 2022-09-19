#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreation", 145, 137), _target("Default")
{
	std::cout << "Shrubbery Default Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), _target(target)
{
	std::cout << "Shrubbery Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	this->_target = src.getTarget();
	std::cout << "Shrubbery Copy Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Destructor : \033[0;35m " << AForm::getName() << " \033[0m" << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_target = rhs.getTarget();
	// this->_gradeToExecute = src.getGradeToExecute();
	// this->_gradeToExecute = rhs.getGradeToSign();
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw AForm::UnsignedFormException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "A COD" << std::endl;
	}

}
