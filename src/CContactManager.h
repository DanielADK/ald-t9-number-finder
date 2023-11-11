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

class CContactManager {
private:
    std::unordered_map<char, char> t9_map = {
        {'a', '2'}, {'b', '2'}, {'c', '2'},
        {'d', '3'}, {'e', '3'}, {'f', '3'},
        {'g', '4'}, {'h', '4'}, {'i', '4'},
        {'j', '5'}, {'k', '5'}, {'l', '5'},
        {'m', '6'}, {'n', '6'}, {'o', '6'},
        {'p', '7'}, {'q', '7'}, {'r', '7'}, {'s', '7'},
        {'t', '8'}, {'u', '8'}, {'v', '8'},
        {'w', '9'}, {'x', '9'}, {'y', '9'}, {'z', '9'}
    };
    std::map<std::string, CContact> m_Contacts;

    /**
     * Normalize string
     * @param str
     * @return
     */
    static std::string normalize(std::string_view str);

    /**
     * Normalize string
     * @param str
     * @return
     */
    std::string string_to_t9_number(std::string_view str);
public:
    /**
     * Constructor
     */
    CContactManager() = default;

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
    std::vector<CContact> search(std::string_view query);
};


#endif //SEMESTRAL2_CCONTACTMANAGER_H
