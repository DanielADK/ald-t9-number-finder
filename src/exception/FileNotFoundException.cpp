//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "FileNotFoundException.h"

FileNotFoundException::FileNotFoundException(std::string_view path) {
    message = "File " + std::string(path) + " not found";
}

const char *FileNotFoundException::what() const noexcept {
    return message.c_str();
}
