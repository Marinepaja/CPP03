/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:49:56 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/07 11:49:56 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap parametric constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragtrap;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this == &fragtrap)
		return (*this);
	this->_name = fragtrap._name;
	this->_hpoint = fragtrap._hpoint;
	this->_epoint = fragtrap._epoint;
	this->_attack = fragtrap._attack;
    return (*this);
}


void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->_name << " says : High Five !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_epoint && this->_hpoint)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage !" << std::endl;
		this->_epoint-= 1;
	}
	else if (this->_epoint)
		std::cout << "FragTrap cannot attack because it has no energy point left !" << std::endl;
	else
		std::cout << "FragTrap cannot attack because it has no hit point left !" << std::endl;
}

// void FragTrap::setAttackPoint(int point)
// {
// 	if (point < 0)
// 		this->_attack = 0;
// 	else
// 		this->_attack = point;
// 	std::cout << "FragTrap " << this->_name << " has now " << this->_attack << " attack points !" << std::endl;
// }

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	this->_hpoint -= amount;
// 	if (this->_hpoint < 0)
// 		this->_hpoint = 0;
// 	std::cout << "FragTrap " << this->_name << " has " << this->_hpoint << " hit points left" << std::endl;
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	if (this->_epoint)
// 	{
// 		this->_hpoint+= amount;
// 		std::cout << "FragTrap " << this->_name << " has repaired itself ! It has now " << this->_hpoint << " hit points left !" << std::endl;
// 		this->_epoint -= 1;
// 	}
// 	else
// 		std::cout << "FragTrap has not enough energy to repair itself !" << std::endl;
// }