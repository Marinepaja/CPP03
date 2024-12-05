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

#include "ScavTrap.hpp"

int main()
{
// 	ClapTrap Rems("Rems");
// 	ClapTrap Gaga("Gaga");


// 	Rems.attack(Kiki.getName());
// 	Kiki.takeDamage(Rems.getAttackPoint());
	
// 	Rems.setAttackPoint(3);
// 	Rems.attack(Kiki.getName());
// 	Kiki.takeDamage(Rems.getAttackPoint());
	
// 	Kiki.beRepaired(2);
// 	Kiki.attack(Rems.getName());
// 	Rems.takeDamage(Kiki.getAttackPoint());
// 	Rems.beRepaired(2);

// 	Kiki.guardGate();
// 	Kiki.attack(Nico.getName());
// 	Nico.takeDamage(Kiki.getAttackPoint());
// 	Nico.beRepaired(10);
// 	return (0);
	ClapTrap Monster("Boo");
	ClapTrap OldLady("Old Lady");
	ScavTrap StrayCat("Kiki");
	ScavTrap StrayDog("Woof");

	Monster.attack(OldLady.getName());
	OldLady.takeDamage(Monster.getAttackPoint());

	Monster.setAttackPoint(9);
	Monster.attack(StrayCat.getName());
	StrayCat.takeDamage(Monster.getAttackPoint());

	StrayCat.setAttackPoint(20);
	StrayCat.attack(StrayDog.getName());
	StrayDog.takeDamage(StrayCat.getAttackPoint());
	StrayDog.guardGate();

	for (int i = 0; i < 10; i++)
	{
		StrayDog.beRepaired(10);
	}
	return (0);
}

