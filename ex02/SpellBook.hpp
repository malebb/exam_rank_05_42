#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <map>

#include "ASpell.hpp"

class SpellBook
{

	public :

		SpellBook();
		virtual ~SpellBook();
		SpellBook(SpellBook const & src);
		SpellBook&	operator=(SpellBook const & rihs);
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const & spell);
		ASpell	*createSpell(std::string const & spell);

	private :

		std::map<std::string, ASpell*>  book;

};

#endif
