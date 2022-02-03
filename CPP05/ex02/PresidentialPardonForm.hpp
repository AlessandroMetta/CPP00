#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__
# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm & src );
		~PresidentialPardonForm();
		PresidentialPardonForm & operator=( const PresidentialPardonForm & rhs );

		const std::string getTarget() const;
		virtual void execute(const Bureaucrat & executer) const;
};

#endif
