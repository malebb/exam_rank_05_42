#include "Warlock.hpp"

Warlock::Warlock(Warlock const & src) : name(src.name), title(src.title)
{
	std::cout << this->name << ": This looks like another boring day" << std::endl;
}

Warlock&		Warlock::operator=(Warlock const & rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
}

Warlock::~Warlock()
{
	for (std::map<std::string, ASpell*>::iterator it = this->learnt.begin();
			it != this->learnt.end(); ++it)
	{
		delete it->second;
	}
	std::cout << this->name << ": My job here is done" << std::endl;
}

const std::string&		Warlock::getName(void) const
{
	return (this->name);
}

const std::string&		Warlock::getTitle(void) const
{
	return (this->title);
}

void					Warlock::setTitle(std::string const & title)
{
	this->title = title;
}

Warlock::Warlock(std::string & name, std::string & title) : name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day" << std::endl;
}

void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	learnt.insert(learnt.end(), std::make_pair(spell->getName(), spell));
}

void	Warlock::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell*>::iterator		it;

	it = this->learnt.find(spell_name);
	if (it != this->learnt.end())
	{
		delete it->second;
		learnt.erase(spell_name);
	}

}

void	Warlock::launchSpell(std::string spell_name, ATarget const & target)
{
	std::map<std::string, ASpell*>::iterator		it;

	it = this->learnt.find(spell_name);
	if (it != this->learnt.end())
	{
		it->second->launch(target);
	}
}
