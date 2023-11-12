//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CSuffixTree.h"

CSuffixTree::CSuffixTree() {
    m_Root = std::make_unique<CSuffixNode>();
}

void CSuffixTree::addSuffix(std::string_view suffix, const std::shared_ptr<CContact> &contact) {
    std::shared_ptr<CSuffixNode> current = m_Root;
    for (char c : suffix) {
        std::shared_ptr<CSuffixNode> child =current->getChild(c);
        if (!child) {
            child = std::make_shared<CSuffixNode>();
            current->addChild(c, child);
        }
        current = child;
    }
    current->setContact(contact);
}

void CSuffixTree::insertContact(const std::shared_ptr<CContact>& contact) {
    std::string_view t9rep = contact->getT9Representation();
    std::string_view name = contact->getName();
    std::string_view phone = contact->getPhone();

    // Add T9 representation into suffix tree
    for (size_t i = 0; i < t9rep.size(); i++)
        addSuffix(t9rep.substr(i), contact);

    // Add name into suffix tree
    for (size_t i = 0; i < name.size(); i++)
        addSuffix(name.substr(i), contact);

    // Add phone into suffix tree
    for (size_t i = 0; i < phone.size(); i++)
        addSuffix(phone.substr(i), contact);

}

std::vector<std::shared_ptr<CContact>> CSuffixTree::search(std::string_view query) const {
    std::vector<std::shared_ptr<CContact>> results;
    std::shared_ptr<CSuffixNode> current = m_Root;
    for (char c : query) {
        current = current->getChild(c);
        if (!current) return results;
    }
    collectContacts(current, results);
    return results;
}

void
CSuffixTree::collectContacts(const std::shared_ptr<CSuffixNode>& node, std::vector<std::shared_ptr<CContact>> &results) const {
    if (node->getContact() != nullptr) results.push_back(node->getContact());

    for (char c = '0'; c <= '9'; c++) {
        std::shared_ptr<CSuffixNode> child = node->getChild(c);
        if (child) collectContacts(child, results);
    }
}

