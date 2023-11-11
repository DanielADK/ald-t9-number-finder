//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CPhoneLoaderFactory.h"

std::unique_ptr<CPhoneLoader> CPhoneLoaderFactory::createLoader(const std::string &path) {
    if (path.substr(path.find_last_of('.') + 1) == "csv") {
        return std::make_unique<CCSVLoader>(path);
    }
    throw UnknownFileTypeException("Unsupported file type");
}
