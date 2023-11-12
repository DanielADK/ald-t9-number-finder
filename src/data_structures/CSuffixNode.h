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
#include "../CContact.h"

template <typename T>
class CSuffixNode {
private:
    std::unordered_map<char, std::shared_ptr<CSuffixNode>> m_Children;
    std::vector<T> m_Data;

public:
    CSuffixNode() = default;
    ~CSuffixNode() = default;

    /**
     * Insert suffix to node
     * @param suffix
     * @param index
     */
    void insert(std::string_view suffix, const T& item);

    std::vector<T> search(std::string_view query);
};

template class CSuffixNode<int>;
template class CSuffixNode<std::shared_ptr<CContact>>;

#endif //SEMESTRAL2_CSUFFIXNODE_H
