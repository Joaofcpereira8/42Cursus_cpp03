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
	std::cout << "ScavTrap Default constructor called" << std::endl;
	name = "Default";
	healthPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string nameScav): ClapTrap(nameScav) {
	healthPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << nameScav << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &bot): ClapTrap(bot) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &botCopy) {
	std::cout << "Copy operator called" << std::endl;
	if (this != &botCopy) {
		this->name = botCopy.name;
		this->healthPoints = botCopy.healthPoints;
		this->energyPoints = botCopy.energyPoints;
		this->attackDamage = botCopy.attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (energyPoints == 0) {
		std::cout << "ScavTrap " << name << " doesn't have energy points! " << std::endl;
		return ;
	}
	else if (healthPoints == 0) {
		std::cout << "ScavTrap " << name << " doesn't have health points! " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << std::endl;
	energyPoints = energyPoints - 1;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is in Gate keeper mode!" << std::endl;
}