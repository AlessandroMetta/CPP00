#ifndef __FORM_HPP__
# define __FORM_HPP__
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		std::string name;
		bool signature;
		unsigned int grade_to_sign;
		unsigned int grade_to_exec;

		void setGrade( unsigned int &old, unsigned int grade );

	protected:
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class NotSignedException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class AlreadySignedException : public std::exception
		{
			public:
				const char * what() const throw();
		};

	public:
		Form();
		Form( std::string name, const unsigned int gradeS, const unsigned int gradeE );
		Form( const Form & src );
		virtual ~Form();
		Form & operator=( const Form & rhs );

		const std::string getName() const;
		const unsigned int getGradeToSign() const;
		const unsigned int getGradeToExec() const;
		const bool getSignature() const;

		void beSigned(Bureaucrat &signer);
		virtual void execute(const Bureaucrat & executer) const =0;
};

std::ostream & operator<<( std::ostream & o, const Form & b );

#endif