/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-albu <bde-albu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:42:54 by bde-albu          #+#    #+#             */
/*   Updated: 2025/07/29 14:38:22 by bde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H

#include <iostream>

class Bureaucrat;

class AForm
{
	private:

		const std::string _name;
		bool _isSigned;
		const int _requiredSign;
		const int _requiredExecute;

	public:

		AForm( void );
        AForm( const AForm& other );
        AForm& operator=( const AForm& other );
        ~AForm( void );

		AForm( std::string name, int signGrade, int executeGrade);

		std::string getName() const;
		bool getIsSigned( void ) const;
		int getRequireSing( void ) const;
		int getRequireExecute( void ) const;

		void beSigned( Bureaucrat& t);

		class GradeTooHigthException: public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};

		static int validateGrade( int grade );
};

	std::ostream& operator<<(std::ostream& out, const AForm& value);

#endif