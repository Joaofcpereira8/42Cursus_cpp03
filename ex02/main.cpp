/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:56:16 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/06 14:56:17 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap primeiro("joao");
	ScavTrap segundo("Matador");
	FragTrap terceiro("Buno");

	primeiro.attack(segundo.getTrapName());
	segundo.takeDamage(primeiro.getAttackDamage());
	primeiro.beRepaired(5);
	segundo.guardGate();
//	for (int i = 0; i < 101; i++)
//		primeiro.attack(terceiro.getTrapName());
	terceiro.highFivesGuys();
	terceiro.takeDamage(110);
}