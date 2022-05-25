#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = this->book.begin();
			it != this->book.end(); ++it)
	{
		delete it->second;
	}
}

void	SpellBook::learnSpell(ASpell *spell)
{
	this->book.insert(this->book.end(), spell->clone());
}

void	SpellBook::forgetSpell(std::string const &spell)
{
	std::map<std::string, ASpell*>::iterator		it;
	it = book.find(spell);

	if (it != this->book.end())
	{
		delete it->second;
		erase(it);
	}
}

ASpell*		SpellBook::createSpell(std::string const & spell)
{
	std::map<std::string, ASpell*>::iterator		it;

	it = book.find(spell);
	if (it != this->book,end())
	{
		return (new ASpell(it->second->getName, it->second->getEffects));
	}
}
