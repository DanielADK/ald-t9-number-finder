//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CContactManager.h"

void CContactManager::loadContacts(const std::vector<CContact> &contacts) {
    for (const auto& contact : contacts) {
        m_Contacts.push_back(contact);
    }
}

std::vector<CContact> CContactManager::search(std::string_view query) {
    std::vector<CContact> result;

    // Analyze query is number or name
    bool isNumber = true;
    for (const auto& c : query) {
        if (!std::isdigit(c)) {
            isNumber = false;
            break;
        }
    }
    if (!isNumber) {
        // Find contacts by name
        for (const auto& contact : m_Contacts) {
            if (contact.getName().find(query) != std::string::npos) {
                result.push_back(contact);
            }
        }
        return result;
    }

    // Find contacts by phone
    for (const auto& contact : m_Contacts) {
        if (contact.second.getPhone().find(query) != std::string::npos) {
            result.push_back(contact.second);
        }
    }


    return result;
}

std::string CContactManager::normalize(std::string_view str) {
    std::string result;
    for (const char& c : str)
        if (std::isalpha(c)) result += std::tolower(c);
    return result;
}

std::string CContactManager::string_to_t9_number(std::string_view input) {
    std::string output;
    for (const char& c : input)
        output += (std::isalpha(c)) ? t9_map[c] : c;
    return output;
}
