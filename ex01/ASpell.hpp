#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public :

		ASpell();
		virtual ~ASpell();
		ASpell&		operator=(ASpell const & rhs);
		ASpell(ASpell const & src);
		ASpell(std::string name, std::string effects);
		std::string		getName(void) const;
		std::string		getEffects(void) const;
		void			launch(ATarget const & target);
		virtual ASpell	*clone(void) = 0;

	protected :

		std::string		name;
		std::string		effects;
};

#endif
