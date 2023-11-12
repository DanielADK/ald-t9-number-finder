//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CContact.h"

 CContact::CContact(std::string name, std::string phone): m_Name(std::move(name)), m_Phone(std::move(phone)) {
    m_T9_representation = string_to_t9_number(normalize(m_Name));
}

const std::string &CContact::getName() const {
    return m_Name;
}

const std::string &CContact::getPhone() const {
    return m_Phone;
}
std::string CContact::normalize(std::string_view str) {
    std::string result;
    for (const char& c : str)
        if (std::isalpha(c)) result += std::tolower(c);
    return result;
}

std::string CContact::string_to_t9_number(std::string_view input) {
    std::string output;
    for (const char& c : input)
        output += (std::isalpha(c)) ? t9_map[c] : c;
    return output;
}

const std::string &CContact::getT9Representation() const {
    return m_T9_representation;
}
