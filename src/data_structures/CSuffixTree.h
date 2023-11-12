//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CSUFFIXTREE_H
#define SEMESTRAL2_CSUFFIXTREE_H

#include "CSuffixNode.h"
#include "../CContact.h"
#include <unordered_set>
#include <memory>

class CSuffixTree {
private:
    std::shared_ptr<CSuffixNode> m_Root;

public:
    CSuffixTree();

    /**
     * Insert contact into suffix tree
     * @param contact
     */
    void insertContact(const std::shared_ptr<CContact>& contact);

    /**
     * Add suffix to contact
     * @param suffix
     * @param contact
     */
    void addSuffix(std::string_view suffix, const std::shared_ptr<CContact>& contact) const;

    /**
     * Search contacts by query
     * @param query
     * @return
     */
    [[nodiscard]] std::unordered_set<std::shared_ptr<CContact>> search(std::string_view query) const;

    /**
     * Collect contacts from node
     * @param node
     * @param results
     */
    void collectContacts(const std::shared_ptr<CSuffixNode>& node, std::unordered_set<std::shared_ptr<CContact>>& results) const;
};

#endif //SEMESTRAL2_CSUFFIXTREE_H
