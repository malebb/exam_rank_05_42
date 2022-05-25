#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public :

		Fireball();
		virtual	~Fireball();
		Fireball&		operator=(Fireball const & rhs);
		Fireball(Fireball const & src);
		ASpell		*clone(void);
};

#endif
