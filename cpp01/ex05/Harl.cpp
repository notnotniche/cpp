#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put on in my burger ! If you did, Ienough bac wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void){
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
	std::cout <<"This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void complain(std::string level)
{
	void (Harl::*complains[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complaint[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
        if (level == complains[i] {
            (this->*complains[i])(); // Call the appropriate function based on 'level'
            break;
	}
	}
}