#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

#include "ASpell.hpp"

class ATarget
{
	public :

		ATarget();
		virtual ~ATarget();
		ATarget&		operator=(ATarget const & rhs);
		ATarget(ATarget const & src);
		ATarget(std::string type);
		std::string const &		getType(void) const;
		void					setType(std::string type);
		void					getHitBySpell(ASpell const & spell) const;
		ATarget					*clone(void);

	protected :

		std::string		type;
};

#endif
