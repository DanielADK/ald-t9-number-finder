//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CSUFFIXTREE_H
#define SEMESTRAL2_CSUFFIXTREE_H

#include "CSuffixNode.h"
#include "../CContact.h"
#include <memory>

class CSuffixTree {
private:
    std::shared_ptr<CSuffixNode> m_Root;

public:
    CSuffixTree();

    void insertContact(std::shared_ptr<CContact> contact);

    void addSuffix(std::string_view suffix, const std::shared_ptr<CContact>& contact);

    [[nodiscard]] std::vector<std::shared_ptr<CContact>> search(std::string_view query) const;

    void collectContacts(const std::shared_ptr<CSuffixNode>& node, std::vector<std::shared_ptr<CContact>>& results) const;
};

#endif //SEMESTRAL2_CSUFFIXTREE_H
