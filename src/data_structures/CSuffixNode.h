//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CSUFFIXNODE_H
#define SEMESTRAL2_CSUFFIXNODE_H


#include <unordered_map>
#include <vector>
#include <string_view>
#include <memory>
#include <string>
#include <utility>
#include "../CContact.h"

class CSuffixNode {
private:
    std::unordered_map<char, std::shared_ptr<CSuffixNode>> m_Children;
    std::shared_ptr<CContact> m_Contact;

public:
    CSuffixNode();
    ~CSuffixNode() = default;

    /**
     * Set contact
     * @param contact
     */
    void setContact(std::shared_ptr<CContact> contact);

    /**
     * Get contact
     * @return
     */
    std::shared_ptr<CContact> getContact() const;

    /**
     * Get child by char
     * @param c
     * @return
     */
    std::shared_ptr<CSuffixNode> getChild(char c) const;

    /**
     * Add child
     * @param c
     * @param child
     */
    void addChild(char c, std::shared_ptr<CSuffixNode> child);

    /**
     * Get node's children
     * @return
     */
    const std::unordered_map<char, std::shared_ptr<CSuffixNode>>& getChildren() const;
};

#endif //SEMESTRAL2_CSUFFIXNODE_H
