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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap Monster("Boo");
	ClapTrap OldLady("Old Lady");
	ScavTrap StrayCat("Kiki");
	ScavTrap StrayDog("Woof");
	FragTrap ThreeLeggedPony("ThreeLeggedPony");
	DiamondTrap Diamond("Lolly");
	
	Diamond.whoAmI();
	Diamond.beRepaired(10);
	Monster.attack(OldLady.getName());
	OldLady.takeDamage(Monster.getAttackPoint());

	Monster.setAttackPoint(9);
	Monster.attack(StrayCat.getName());
	StrayCat.takeDamage(Monster.getAttackPoint());

	StrayCat.setAttackPoint(20);
	StrayCat.attack(StrayDog.getName());
	StrayDog.takeDamage(StrayCat.getAttackPoint());
	StrayCat.attack(Diamond.getName());
	Diamond.takeDamage(StrayCat.getAttackPoint());
	Diamond.attack(StrayDog.getName());
	StrayDog.guardGate();

	ThreeLeggedPony.attack(StrayCat.getName());
	StrayCat.takeDamage(ThreeLeggedPony.getAttackPoint());

	for (int i = 0; i < 10; i++)
	{
		StrayDog.beRepaired(10);
	}
	return (0);
}

