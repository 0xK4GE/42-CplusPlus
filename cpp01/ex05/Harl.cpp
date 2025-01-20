/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:48:22 by hbendjab          #+#    #+#             */
/*   Updated: 2025/01/20 10:48:24 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"


Harl::Harl(void) {}
Harl::~Harl(void) {}


void Harl::debug(void) {
    std::cout << "I love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
              << "I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn't put enough bacon in my burger! "
              << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I've been coming for years whereas you started "
              << "working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! "
              << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
     void(Harl::*funcs[])() = { &Harl::debug , &Harl::info,&Harl::warning , &Harl::error};
     std::string levels[] = {
          "DEBUG",
          "INFO",
          "WARNING",
          "ERROR"
      };
      for(int i = 0 ; i < 4; i++){
           if(levels[i] == level)
               (this->*funcs[i])();
      }
}
Harl& Harl::operator=(const Harl& other){
      
      if (this != &other) 
        (void)other;       
     return *this;


}

Harl::Harl(const Harl& other){
     
     (void)other;
}