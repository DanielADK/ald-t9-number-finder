//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CPhoneLoader.h"
#include <iostream>

class CCSVLoader: public CPhoneLoader {
public:
    explicit CCSVLoader(const std::string& path);

    void load() override;
};