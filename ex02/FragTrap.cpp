/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:41:29 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/08 14:41:30 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	name = "Default";
	healthPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string nameFrag): ClapTrap(nameFrag) {
	healthPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << nameFrag << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &bot): ClapTrap(bot) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &botCopy) {
	std::cout << "FragTrap copy operator called" << std::endl;
	if (this != &botCopy) {
		this->name = botCopy.name;
		this->healthPoints = botCopy.healthPoints;
		this->energyPoints = botCopy.energyPoints;
		this->attackDamage = botCopy.attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << ": Come here guys! I want to HighFive everyone!!! 🙌" << std::endl;
}


