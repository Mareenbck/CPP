/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:29:01 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/20 12:31:38 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern &operator=(Intern const & rhs);

		AForm *makeForm(std::string formName, std::string formTarget);

		AForm	*newShrubbery(std::string target);
		AForm	*newRobotomy(std::string target);
		AForm	*newPresidential(std::string target);

};

#endif

