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

class CSuffixNode {
private:
    std::unordered_map<char, std::shared_ptr<CSuffixNode>> m_Children;
    std::vector<int> m_Indexes;

public:
    CSuffixNode() = default;
    ~CSuffixNode() = default;

    /**
     * Insert suffix to node
     * @param suffix
     * @param index
     */
    void insert(std::string_view suffix, int index);

    std::vector<int> search(std::string_view query);
};


#endif //SEMESTRAL2_CSUFFIXNODE_H
