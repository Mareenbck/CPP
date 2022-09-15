/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:18:45 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/15 15:38:16 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string const &getName(void) const;
		int getGrade(void) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};

	private:
		const std::string _name;
		int _grade;
};

#endif
