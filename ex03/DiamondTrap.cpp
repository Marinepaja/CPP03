/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:48:23 by mlaporte          #+#    #+#             */
/*   Updated: 2024/12/10 15:48:23 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap parametric constructor called" << std::endl;
	this->_name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap) : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondtrap;
	return;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
	std::cout << "DiamondTrap copy assignment operator called." << std::endl;
	if (this == &diamondtrap)
		return (*this);
	this->_name = diamondtrap._name;
	this->_hpoint = diamondtrap._hpoint;
	this->_epoint = diamondtrap._epoint;
	this->_attack = diamondtrap._attack;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

std::string DiamondTrap::getName(void)
{
	return (this->_name);
}
