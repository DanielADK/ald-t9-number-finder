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

template <typename T>
class CSuffixTree {
private:
    std::unique_ptr<CSuffixNode<T>> m_Root;

public:
    CSuffixTree();

    void buildTree(std::string_view text);
    void insert(std::string_view text, const T& item);
    std::vector<T> search(std::string_view query);
};

template class CSuffixTree<int>;
template class CSuffixTree<std::shared_ptr<CContact>>;

#endif //SEMESTRAL2_CSUFFIXTREE_H
