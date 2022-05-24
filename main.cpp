#include "Warlock.hpp"

int	main(void)
{
	std::string		name("Richard");
	std::string		name2("Jack");
	std::string		title("Mistress of Magma");
	std::string		title2("the Long");
	Warlock const richard(name, title);
	Warlock* jack = new Warlock(name2, title2);

	richard.introduce();

	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;

	return (0);
}
