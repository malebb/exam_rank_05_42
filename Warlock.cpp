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

