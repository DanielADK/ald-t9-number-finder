//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CCONTACTMANAGER_H
#define SEMESTRAL2_CCONTACTMANAGER_H


#include <vector>
#include "CContact.h"

class CContactManager {
private:
    std::vector<CContact> m_Contacts;

public:
    /**
     * Load contacts from vector
     * @param contacts
     */
    void loadContacts(const std::vector<CContact>& contacts);

    /**
     * Search contacts by query
     * @param query
     * @return
     */
    std::vector<CContact> search(const std::string& query);
};


#endif //SEMESTRAL2_CCONTACTMANAGER_H
