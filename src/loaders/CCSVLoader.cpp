//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include "CCSVLoader.h"


CCSVLoader::CCSVLoader(const std::string &path) : CPhoneLoader(path) {}

char CCSVLoader::detectDelimiter() {
    std::ifstream file(m_Path, std::ios::in);
    // Check if file exists
    if (!file.is_open()) {
        throw FileNotFoundException(m_Path);
    }

    if (std::string line; std::getline(file, line)) {
        // Typical delimiters are: comma, semicolon, tab
        std::array<char, 4> delimiters = {',', ';', '\t'};
        size_t max_delimiter_count = 0;
        char detected_delimiter = ',';

        for (char delim : delimiters) {
            size_t delimiter_count = std::count(line.begin(), line.end(), delim);
            if (delimiter_count > max_delimiter_count) {
                max_delimiter_count = delimiter_count;
                detected_delimiter = delim;
            }
        }
        return detected_delimiter;
    }
    return ',';
}


void CCSVLoader::load() {

}

