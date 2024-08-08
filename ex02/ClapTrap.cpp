/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:56:32 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/06 14:56:33 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), healthPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), healthPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &bot): name(bot.name), healthPoints(bot.healthPoints),
	energyPoints(bot.energyPoints), attackDamage(bot.attackDamage) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &botCopy) {
	std::cout << "ClapTrap Copy operator called" << std::endl;
	if (this != &botCopy) {
		this->name = botCopy.name;
		this->healthPoints = botCopy.healthPoints;
		this->energyPoints = botCopy.energyPoints;
		this->attackDamage = botCopy.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap "<< name << " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " doesn't have energy points! " << std::endl;
		return ;
	}
	else if (healthPoints == 0) {
		std::cout << "ClapTrap " << name << " doesn't have health points! " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
	energyPoints = energyPoints - 1;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " doesn't have energy points! " << std::endl;
		return ;
	}
	else if (healthPoints == 0) {
		std::cout << "ClapTrap " << name << " doesn't have health points! " << std::endl;
		return ;
	}
	std::cout << name << " healed himself " << amount << " point(s)" << std::endl;
	energyPoints = energyPoints - 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (healthPoints == 0) {
		std::cout << name << " doesn't have health points! Don't hit him anymore pls" << std::endl;
		return ;
	}
	if (amount > (unsigned int)healthPoints) {
		std::cout << name << " died with this attack!" << std::endl;
		healthPoints = 0;
		return ;
	}
	std::cout << name <<" toked "<< amount << " damage" << std::endl;
	healthPoints = healthPoints - amount;
	if (healthPoints < 0)
		healthPoints = 0;
}

std::string	ClapTrap::getTrapName() {
	return name;
}

int	ClapTrap::getAttackDamage() {
	return attackDamage;
}