//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CContactManager.h"


CContactManager::CContactManager() {
    m_SuffixTree = std::make_unique<CSuffixTree>();
}

void CContactManager::loadContacts(const std::vector<CContact>& contacts) {
    m_Contacts.clear();
    // m_SuffixTree->clear();

    for (const CContact& contact : contacts) {
        auto new_contact = std::make_shared<CContact>(contact);
        m_Contacts.push_back(new_contact);
        m_SuffixTree->insertContact(new_contact);
    }
}

std::unordered_set<std::shared_ptr<CContact>> CContactManager::search(std::string_view query) const {
    // Detect if query is a number
    bool is_number = true;
    for (char c : query) {
        if (!std::isdigit(c)) {
            is_number = false;
            break;
        }
    }
    if (is_number)
        return m_SuffixTree->search(query);
    return m_SuffixTree->search(CContact::normalize(query));
}
