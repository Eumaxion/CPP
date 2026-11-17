#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <new>
# include <iostream>

#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string name);
		~Zombie();
		void announce( void );
};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

#endif