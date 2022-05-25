#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int	main(void)
{
	std::string		name("Richard");
	std::string		title("the Titled");
	Warlock richard(name, title);

	Dummy bob;
	Fwoosh* fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);	
	return (0);
}
