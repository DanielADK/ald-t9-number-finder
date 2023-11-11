//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CSuffixNode.h"

void CSuffixNode::insert(std::string_view suffix, int index) {
    m_Indexes.push_back(index);
    if (suffix.length() > 0) {
        char current = suffix[0];
        std::shared_ptr<CSuffixNode> child = nullptr;

        // If there is no child with current char, create new one
        if (m_Children.find(current) == m_Children.end()) {
            child = std::make_shared<CSuffixNode>();
            m_Children[current] = child;
        } else {
            child = std::shared_ptr<CSuffixNode>(m_Children[current]);
        }
        auto reminder = suffix.substr(1);
        child->insert(reminder, index+1);
    }
}

std::vector<int> CSuffixNode::search(std::string_view query) {
    if (query.length() == 0) {
        return m_Indexes;
    } else {
        char current = query[0];
        if (m_Children.find(current) != m_Children.end())
            return m_Children[current]->search(query.substr(1));
        else
            return {}; // Empty vector if there is no match
    }
}
