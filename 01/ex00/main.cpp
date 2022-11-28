/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pieterderksen <pieterderksen@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 18:28:29 by pieterderks   #+#    #+#                 */
/*   Updated: 2022/11/28 18:33:02 by pieterderks   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "Anouncing Zombies\n\n";
    
    std::cout << "New zombie 'Lars' with 'randomChump'\n" << std::endl;
    randomChump("Lars");
    
    
    Zombie  *n_zom;
    std::cout << "New zombie 'Bjorn' with 'newZombie'\n" << std::endl;
    n_zom = newZombie("Bjorn");
    // delete n_zom;
    return (0);
}