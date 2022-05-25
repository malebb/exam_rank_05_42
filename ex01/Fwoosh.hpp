#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public :

		Fwoosh();
		virtual	~Fwoosh();
		Fwoosh&		operator=(Fwoosh const & rhs);
		Fwoosh(Fwoosh const & src);
		ASpell		*clone(void);
};

#endif
