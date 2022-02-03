#ifndef __SHRUBERRYCREATIONFORM_HPP__
# define __SHRUBERRYCREATIONFORM_HPP__
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		ShrubberyCreationForm & operator=( const ShrubberyCreationForm & rhs );
		virtual ~ShrubberyCreationForm();

		const std::string getTarget() const;
		virtual void execute(const Bureaucrat & executer) const;
};
// Mon Amour (je t'aime beaucoup) tchao- tu dois es)
#endif
