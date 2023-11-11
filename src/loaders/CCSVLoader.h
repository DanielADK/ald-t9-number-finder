//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#include <fstream>
#include "CPhoneLoader.h"
#include <iostream>

class CCSVLoader: public CPhoneLoader {
private:
    /**
     * Detects delimiter in CSV file by counting occurrences of each delimiter in first line.
     * @return Detected delimiter
     */
    char detectDelimiter();
public:
/**
     * Constructor
     * @param path Path to CSV file
     */
    explicit CCSVLoader(const std::string& path);

    /**
     * Loads CSV file
     */
    void load() override;
};