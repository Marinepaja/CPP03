/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:49:56 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/07 11:49:56 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap parametric constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavtrap;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavtrap)
{
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this == &scavtrap)
		return (*this);
	this->_name = scavtrap._name;
	this->_hpoint = scavtrap._hpoint;
	this->_epoint = scavtrap._epoint;
	this->_attack = scavtrap._attack;
    return (*this);
}


void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_epoint && this->_hpoint)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage !" << std::endl;
		this->_epoint-= 1;
	}
	else if (this->_epoint)
		std::cout << "ScavTrap cannot attack because it has no energy point left !" << std::endl;
	else
		std::cout << "ScavTrap cannot attack because it has no hit point left !" << std::endl;
}

void ScavTrap::setAttackPoint(int point)
{
	if (point < 0)
		this->_attack = 0;
	else
		this->_attack = point;
	std::cout << "ScavTrap " << this->_name << " has now " << this->_attack << " attack points !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->_hpoint -= amount;
	if (this->_hpoint < 0)
		this->_hpoint = 0;
	std::cout << "ScavTrap " << this->_name << " has " << this->_hpoint << " hit points left" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_epoint)
	{
		this->_hpoint+= amount;
		std::cout << "ScavTrap " << this->_name << " has repaired itself ! It has now " << this->_hpoint << " hit points left !" << std::endl;
		this->_epoint -= 1;
	}
	else
		std::cout << "ScavTrap has not enough energy to repair itself !" << std::endl;
}