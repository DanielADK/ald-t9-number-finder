//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CSuffixNode.h"

template <typename T>
void CSuffixNode<T>::insert(std::string_view suffix, const T& item) {
    if (suffix.empty()) {
        m_Data.push_back(item);
    } else {
        char current = suffix[0];
        if (m_Children.find(current) == m_Children.end()) {
            m_Children[current] = std::make_shared<CSuffixNode<T>>();
        }
        m_Children[current]->insert(suffix.substr(1), item);
    }
}

template<typename T>
std::vector<T> CSuffixNode<T>::search(std::string_view query) {
    if (query.empty()) {
        return m_Data;
    } else {
        char current = query[0];
        auto it = m_Children.find(current);
        if (it != m_Children.end())
            return it->second->search(query.substr(1));
        else
            return {}; // Empty vector if there is no match
    }
}
