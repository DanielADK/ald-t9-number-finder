//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "UnknownFileTypeException.h"

UnknownFileTypeException::UnknownFileTypeException(std::string_view path) {
    message = "File " + std::string(path) + " has unknown file type";
}

const char *UnknownFileTypeException::what() const noexcept {
    return message.c_str();
}
