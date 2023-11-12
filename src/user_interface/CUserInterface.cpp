//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CUserInterface.h"
#include "../loaders/CPhoneLoaderFactory.h"

CUserInterface::CUserInterface(CContactManager &manager): m_ContactManager(manager) {}

void CUserInterface::loadContacts(const std::string &path) {
    std::vector<CContact> contacts;
    std::cout << "Loading contacts..." << std::endl;
    try {
        auto loader = CPhoneLoaderFactory::createLoader(path);
        loader->load();
        contacts = loader->export_contacts();

        // load contacts to manager
        m_ContactManager.loadContacts(contacts);

    } catch (const UnknownFileTypeException& e) {
        std::cerr << "Error: " <<  e.what() << std::endl;
    }
    std::cout << "Loaded: " << contacts.size() << " contacts" << std::endl;

}

void CUserInterface::searchBar() {
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
                printf("\t%-20s ( %9s )\n", contact->getName().c_str(), contact->getPhone().c_str());
            }
        }
    }
}
