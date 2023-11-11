//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CPhoneLoader.h"

CPhoneLoader::CPhoneLoader(std::string_view path) : m_Path(path) {}

const std::vector<CContact>& CPhoneLoader::export_contacts() const {
    return m_Contacts;
}

