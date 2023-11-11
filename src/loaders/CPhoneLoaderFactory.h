//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CPHONELOADERFACTORY_H
#define SEMESTRAL2_CPHONELOADERFACTORY_H

#include "CPhoneLoader.h"
#include "CCSVLoader.h"
#include "../exception/UnknownFileTypeException.h"
#include <memory>

class CPhoneLoaderFactory {
public:
    /**
     * Factory method for creating loaders
     * @param path
     * @return
     */
    static std::unique_ptr<CPhoneLoader> createLoader(const std::string& path);
};


#endif //SEMESTRAL2_CPHONELOADERFACTORY_H
