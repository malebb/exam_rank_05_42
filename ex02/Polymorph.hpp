#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public :

		Polymorph();
		virtual	~Polymorph();
		Polymorph&		operator=(Polymorph const & rhs);
		Polymorph(Polymorph const & src);
		ASpell		*clone(void);
};

#endif
