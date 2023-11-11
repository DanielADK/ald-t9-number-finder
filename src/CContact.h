//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CCONTACT_H
#define SEMESTRAL2_CCONTACT_H

#include <string>
#include <utility>

class CContact {
private:
    std::string m_Name;
    std::string m_Phone;
public:
    /**
     * Constructor
     * @param name Name of contact
     * @param phone Phone number of contact
     */
    CContact(std::string  name, std::string  phone);

    /**
     * Returns name of contact
     * @return Name of contact
     */
    [[nodiscard]] const std::string &getName() const;

    /**
     * Returns phone number of contact
     * @return Phone number of contact
     */
    [[nodiscard]] const std::string &getPhone() const;

};


#endif //SEMESTRAL2_CCONTACT_H
