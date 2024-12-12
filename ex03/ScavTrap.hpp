/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:49:36 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/07 11:49:36 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public : 
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scavtrap);
		ScavTrap &operator=(ScavTrap const &scavtrap);
		~ScavTrap();
		void attack(const std::string& target);
		// void beRepaired(unsigned int amount);
		// void takeDamage(unsigned int amount);
		// void setAttackPoint(int point);
		void guardGate(void) const;

};

#endif