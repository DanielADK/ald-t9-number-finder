//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CCONTACTMANAGER_H
#define SEMESTRAL2_CCONTACTMANAGER_H


#include <vector>
#include <unordered_map>
#include <map>
#include "CContact.h"
#include "data_structures/CSuffixTree.h"

class CContactManager {
private:
    std::vector<std::shared_ptr<CContact>> m_Contacts;
public:
    std::unique_ptr<CSuffixTree<std::shared_ptr<CContact>>> m_SuffixTree;

    /**
     * Constructor
     */
    CContactManager();


    void loadContacts(const std::vector<CContact>& contacts);

    /**
     * Search contacts by query
     * @param query
     * @return
     */
    std::vector<std::shared_ptr<CContact>> search(std::string_view query);
};


#endif //SEMESTRAL2_CCONTACTMANAGER_H
