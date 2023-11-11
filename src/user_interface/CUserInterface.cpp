//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CUserInterface.h"

CUserInterface::CUserInterface(CContactManager &manager): m_ContactManager(manager) {}

void CUserInterface::run() {
    std::string input;
    std::cout << "Welcome to the phone book!" << std::endl;

    while (true) {
        std::cout << "Please enter a number sequence or name to search for ('exit' for exit): ";
        std::getline(std::cin, input);

        if (input == "exit") break;

        auto contacts = m_ContactManager.search(input);
        if (contacts.empty()) {
            std::cout << "Nebyly nalezeny žádné kontakty.\n";
        } else {
            std::cout << "Nalezené kontakty:\n";
            for (const auto& contact : contacts) {
                std::cout << "Jméno: " << contact.getName() << ", Telefon: " << contact.getPhone() << "\n";
            }
        }
    }
}

