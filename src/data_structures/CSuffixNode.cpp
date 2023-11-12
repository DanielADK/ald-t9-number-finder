//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CSuffixNode.h"

CSuffixNode::CSuffixNode(): m_Contact(nullptr) {}

void CSuffixNode::setContact(std::shared_ptr<CContact> contact) {
    m_Contact = std::move(contact);
}

std::shared_ptr<CContact> CSuffixNode::getContact() const {
    return m_Contact;
}

std::shared_ptr<CSuffixNode> CSuffixNode::getChild(char c) const {
    if (m_Children.find(c) != m_Children.end())
        return m_Children.at(c);

    return nullptr;
}

void CSuffixNode::addChild(char c, std::shared_ptr<CSuffixNode> child) {
    m_Children[c] = std::move(child);
}

const std::unordered_map<char, std::shared_ptr<CSuffixNode>> &CSuffixNode::getChildren() const {
    return m_Children;
}

