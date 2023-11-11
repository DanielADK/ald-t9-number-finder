//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CSUFFIXTREE_H
#define SEMESTRAL2_CSUFFIXTREE_H

#include "CSuffixNode.h"
#include <memory>

class CSuffixTree {
private:
    std::shared_ptr<CSuffixNode> m_Root;

public:
    CSuffixTree();

    void buildTree(std::string_view text);
    std::vector<int> search(std::string_view query);
};


#endif //SEMESTRAL2_CSUFFIXTREE_H
