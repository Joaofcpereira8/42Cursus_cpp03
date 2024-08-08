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

int main() {
	ClapTrap primeiro;
	ClapTrap segundo("Matador");

	for (int i = 0; i < 10; i++) {
		primeiro.attack(segundo.getTrapName());
		segundo.takeDamage(1);
	}
	primeiro.attack(segundo.getTrapName());
	segundo.beRepaired(1);
}