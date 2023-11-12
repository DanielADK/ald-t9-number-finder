//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CCONTACT_H
#define SEMESTRAL2_CCONTACT_H

#include <string>
#include <utility>
#include <unordered_map>

class CContact {
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
    std::string m_Name;
    std::string m_Phone;
    std::string m_T9_representation;
public:
    /**
     * Constructor
     * @param name Name of contact
     * @param phone Phone number of contact
     */
    CContact(std::string  name, std::string  phone);
    ~CContact() = default;

    /**
     * Returns name of contact
     * @return Name of contact
     */
    [[nodiscard]] const std::string& getName() const;

    /**
     * Returns phone number of contact
     * @return Phone number of contact
     */
    [[nodiscard]] const std::string& getPhone() const;

    /**
     * Returns t9 representation of contact
     * @return T9 representation of contact
     */
    [[nodiscard]] const std::string& getT9Representation() const;

    /**
     * Normalize string
     * @param str
     * @return
     */
    static std::string normalize(std::string_view str);

    /**
     * Normalize string to t9-like format
     * @param str
     * @return
     */
    std::string string_to_t9_number(std::string_view str);

};


#endif //SEMESTRAL2_CCONTACT_H
