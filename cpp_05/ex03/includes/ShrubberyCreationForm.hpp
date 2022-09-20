/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:38:37 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/20 12:11:27 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iomanip>
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

		std::string getTarget(void) const;

		void execute(Bureaucrat const &executor) const;
		AForm *make(std::string formTarget);

	private:
		std::string _target;
};

#endif
