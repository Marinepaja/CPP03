/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:10:42 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/03 15:10:42 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP 
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int attack);
		ClapTrap(ClapTrap const &claptrap);
		ClapTrap &operator=(ClapTrap const &claptrap);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setName(std::string name);
		void setAttackPoint(int point);
		int	getEnergyPoint(void);
		int	getAttackPoint(void);
		std::string getName(void);
	protected:
		std::string _name;
		int	_hpoint;
		int	_epoint;
		int	_attack;

};

#endif