/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:10:51 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/03 15:10:51 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Monster("Boo");
	ClapTrap OldLady("Old Lady");

	Monster.attack(OldLady.getName());
	OldLady.takeDamage(Monster.getAttackPoint());
	Monster.setAttackPoint(9);
	Monster.attack(OldLady.getName());
	OldLady.takeDamage(Monster.getAttackPoint());
	OldLady.setAttackPoint(-20);
	OldLady.attack(Monster.getName());
	Monster.takeDamage(OldLady.getAttackPoint());
	for (int i = 0; i < 10; i++)
	{
		OldLady.beRepaired(10);
	}
	return (0);
}

