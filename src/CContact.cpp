//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CContact.h"

CContact::CContact(std::string name, std::string phone): m_Name(std::move(name)), m_Phone(std::move(phone)) {}

const std::string &CContact::getName() const {
    return m_Name;
}

const std::string &CContact::getPhone() const {
    return m_Phone;
}
