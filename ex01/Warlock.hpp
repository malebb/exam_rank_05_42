#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	public :

		Warlock();
		Warlock&	operator=(Warlock const & rhs);
		Warlock(Warlock const & src);
		const std::string&		getName(void) const;
		const std::string&		getTitle(void) const;
		void					setTitle(std::string const & title);
		Warlock(std::string & name, std::string & title);
		void	introduce() const;
		virtual	~Warlock();
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spell_name);
		void	launchSpell(std::string spell_name, ATarget const & target);

	private :

		std::string					name;
		std::string					title;
		std::map<std::string, ASpell*>			learnt;
};

#endif
