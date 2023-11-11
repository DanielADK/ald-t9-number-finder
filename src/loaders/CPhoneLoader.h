//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//


#ifndef SEMESTRAL2_CPHONELOADER_H
#define SEMESTRAL2_CPHONELOADER_H

#include <string>
#include <vector>
#include "../CContact.h"

class CPhoneLoader {
protected:
    std::string m_Path;
    std::vector<CContact> m_Contacts;

public:
    /**
     * Constructor
     * @param path Path to file
     */
    explicit CPhoneLoader(std::string_view path);
    /**
     * Destructor
     */
    virtual ~CPhoneLoader() = default;

    /**
     * Loads file into memory
     */
    virtual void load() = 0;

    /**
     * Exports contacts
     * @return Vector of contacts
     */
    [[nodiscard]] const std::vector<CContact>& export_contacts() const;
};


#endif //SEMESTRAL2_CPHONELOADER_H
