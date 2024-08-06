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

ClapTrap::ClapTrap(): name("Default"), healthPoints(100), energyPoints(50), attackDamage(20) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), healthPoints(100), energyPoints(50), attackDamage(20){
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &bot): name(bot.name), healthPoints(bot.healthPoints),
	energyPoints(bot.energyPoints), attackDamage(bot.attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &botCopy) {
	std::cout << "Copy operator called" << std::endl;
	if (this != &botCopy)
		*this = botCopy;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	ClapTrap	bot(target);
	if (energyPoints == 0 || healthPoints == 0) {
		std::cout << "ClapTrap " << name << " doesn't have energy points! " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << bot.name << ", causing " << attackDamage << " points of damage!" << std::endl;
	bot.takeDamage(attackDamage);
	energyPoints = energyPoints -1;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints == 0 || healthPoints == 0) {
		std::cout << "ClapTrap " << name << " doesn't have energy points! " << std::endl;
		return ;
	}
	std::cout << name << " healed himself " << amount << " points" << std::endl;
	energyPoints = energyPoints -1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (healthPoints == 0) {
		std::cout << "ClapTrap " << name << " doesn't have health points! Don't hit him anymore pls" << std::endl;
		return ;
	}
	std::cout << name <<" toked "<< amount << " damage" << std::endl;
	healthPoints = healthPoints - amount;
}

std::string	ClapTrap::getClapTrapName() {
	return name;
}