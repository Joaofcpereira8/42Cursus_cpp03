/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:24:44 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/06 16:24:45 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
	healthPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	healthPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &bot): ClapTrap(bot) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	ClapTrap	bot(target);
	if (energyPoints == 0 || healthPoints == 0) {
		std::cout << "ScavTrap " << name << " doesn't have energy points! " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << bot.getClapTrapName() << ", causing " << attackDamage << " points of damage!" << std::endl;
	bot.takeDamage(attackDamage);
	energyPoints = energyPoints -1;
}