#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public :
		Dummy();
		~Dummy();
		Dummy(Dummy const & src);
		Dummy&		operator=(Dummy const & rhs);
		ATarget		*clone(void) const;
};

#endif
