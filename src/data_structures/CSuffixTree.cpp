//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CSuffixTree.h"

CSuffixTree::CSuffixTree() : m_Root(std::make_shared<CSuffixNode>()) {}

void CSuffixTree::buildTree(std::string_view text) {
    for (int i = 0; i < text.length(); i++) {
        std::basic_string_view<char> suffix = text.substr(i);
        m_Root->insert(suffix, i);
    }
}

std::vector<int> CSuffixTree::search(std::string_view query) {
    return m_Root->search(query);
}



