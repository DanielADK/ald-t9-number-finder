//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CSuffixTree.h"

template<typename T>
CSuffixTree<T>::CSuffixTree() {
    m_Root = std::make_unique<CSuffixNode<T>>();
}


template<>
void CSuffixTree<int>::buildTree(std::string_view text) {
    for (int i = 0; i < (int)text.length(); i++) {
        std::string_view suffix = text.substr(i);
        m_Root->insert(suffix, i);
    }
}


template<typename T>
std::vector<T> CSuffixTree<T>::search(std::string_view query) {
    return m_Root->search(query);
}


template<typename T>
void CSuffixTree<T>::insert(std::string_view text, const T &item) {
    m_Root->insert(text, item);
}

