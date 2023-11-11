//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_UNKNOWNFILETYPEEXCEPTION_H
#define SEMESTRAL2_UNKNOWNFILETYPEEXCEPTION_H

#include <exception>
#include <string>

class UnknownFileTypeException : public std::exception {
private:
    std::string message;
public:
    /**
     * Constructor
     * @param path
     */
    explicit UnknownFileTypeException(std::string_view path);
    /**
     * Returns message
     * @return
     */
    [[nodiscard()]] const char *what() const noexcept override;
};


#endif //SEMESTRAL2_UNKNOWNFILETYPEEXCEPTION_H
