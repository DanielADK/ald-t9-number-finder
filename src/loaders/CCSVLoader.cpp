//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include <vector>
#include <algorithm>
#include "CCSVLoader.h"


CCSVLoader::CCSVLoader(const std::string &path) : CPhoneLoader(path) {}

char CCSVLoader::detectDelimiter() {
    std::ifstream file(m_Path);
    std::string line;
    if (std::getline(file, line)) {
        // Typical delimiters are: comma, semicolon, tab
        std::vector<char> delimiters = {',', ';', '\t'};
        int max_delimiter_count = 0;
        char detected_delimiter = ',';

        for (char delim: delimiters) {
            int delimiter_count = std::count(line.begin(), line.end(), delim);
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

