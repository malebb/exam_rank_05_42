#include <string>
#include <iostream>

class Warlock
{
	public :
		Warlock();
		Warlock&	operator=(Warlock const & rhs);
		Warlock(Warlock const & src);
		const std::string&		getName(void) const;
		const std::string&		getTitle(void) const;
		void					setTitle(std::string const & title);
		Warlock(std::string & name, std::string & title);
		void	introduce() const;
		virtual	~Warlock();

	private :
		std::string		name;
		std::string		title;
};
