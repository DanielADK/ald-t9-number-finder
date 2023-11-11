//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_FILENOTFOUNDEXCEPTION_H
#define SEMESTRAL2_FILENOTFOUNDEXCEPTION_H

#include <exception>
#include <string>

class FileNotFoundException : public std::exception {
private:
    std::string message;

public:
    explicit FileNotFoundException(std::string_view path);
    [[nodiscard]] const char *what() const noexcept override;
};


#endif //SEMESTRAL2_FILENOTFOUNDEXCEPTION_H
