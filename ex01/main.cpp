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

	primeiro.attack("Matador");
	segundo.attack("joao");
	segundo.attack("Buno");
}