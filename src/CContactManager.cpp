//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CContactManager.h"

void CContactManager::loadContacts(const std::vector<CContact> &contacts) {
    m_Contacts = contacts;
}

std::vector<CContact> CContactManager::search(const std::string &query) {
    return std::vector<CContact>();
}
