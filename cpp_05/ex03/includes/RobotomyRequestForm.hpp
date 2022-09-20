/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:22:59 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/20 12:10:08 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>


class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

		std::string getTarget(void) const;

		void execute(Bureaucrat const &executor) const;
		AForm *make(std::string formTarget);

	private:
		std::string _target;
};

#endif
