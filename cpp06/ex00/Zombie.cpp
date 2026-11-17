# include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << GREEN << "Zombie: " << _name << " created!" << RESET <<  std::endl;
}

Zombie::~Zombie(){
	std::cout << RED << "Zombie: " << _name << "  destroyed!" << RESET << std::endl;
}

void  Zombie::announce( void )
{
	std::cout << BLUE << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}