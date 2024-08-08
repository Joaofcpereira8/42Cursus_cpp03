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

int main() {
	ClapTrap primeiro("joao");
	ScavTrap segundo("Matador");
	ScavTrap terceiro("Buno");

	primeiro.attack(segundo.getTrapName());
	segundo.takeDamage(primeiro.getAttackDamage());
	for (int i = 0; i < 51; i++) {
		segundo.attack("joao");
		primeiro.takeDamage(20);
	}
	primeiro.beRepaired(5);
	terceiro.attack("Matador");
	terceiro.guardGate();
}