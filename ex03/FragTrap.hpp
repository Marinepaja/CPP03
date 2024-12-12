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

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public : 
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &fragtrap);
		FragTrap &operator=(FragTrap const &fragtrap);
		~FragTrap();
		void attack(const std::string& target);
		// void beRepaired(unsigned int amount);
		// void takeDamage(unsigned int amount);
		// void setAttackPoint(int point);
		void highFivesGuys(void) const;

};

#endif