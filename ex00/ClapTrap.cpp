/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:11:06 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/03 15:11:06 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(), _hpoint(10), _epoint(1), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hpoint(10), _epoint(10), _attack(0)
{
	std::cout << "Parametric constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = claptrap._name;
	this->_hpoint = claptrap._hpoint;
	this->_epoint = claptrap._epoint;
	this->_attack = claptrap._attack;

	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this == &claptrap)
		return (*this);
	this->_name = claptrap._name;
	this->_hpoint = claptrap._hpoint;
	this->_epoint = claptrap._epoint;
	this->_attack = claptrap._attack;
    return (*this);
}

int	ClapTrap::getEnergyPoint(void)
{
	return(this->_epoint);
}

int	ClapTrap::getAttackPoint(void)
{
	return(this->_attack);
}

std::string ClapTrap::getName(void)
{
	return(this->_name);
}


void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setAttackPoint(int point)
{
	if (point < 0)
		this->_attack = 0;
	else
		this->_attack = point;
	std::cout << "ClapTrap " << this->_name << " has now " << this->_attack << " attack points !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_epoint && this->_hpoint)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage !" << std::endl;
		this->_epoint-= 1;
	}
	else if (this->_epoint)
		std::cout << "ClapTrap cannot attack because he has no energy point left !" << std::endl;
	else
		std::cout << "ClapTrap cannot attack because he has no hit point left !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hpoint -= amount;
	if (this->_hpoint < 0)
		this->_hpoint = 0;
	std::cout << this->_name << " has " << this->_hpoint << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_epoint)
	{
		this->_hpoint+= amount;
		std::cout << "ClapTrap " << this->_name << " has repaired itself ! It has now " << this->_hpoint << " hit points left !" << std::endl;
		this->_epoint -= 1;
	}
	else
		std::cout << "ClapTrap has not enough energy to repair itself !" << std::endl;
}