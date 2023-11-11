//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//


#ifndef SEMESTRAL2_CPHONELOADER_H
#define SEMESTRAL2_CPHONELOADER_H


#include <string>

class CPhoneLoader {
private:
    std::string m_Path;

    void detectFileType();
public:
    explicit CPhoneLoader(const std::string& path);
    virtual ~CPhoneLoader() = default;

    virtual void load() = 0;
};


#endif //SEMESTRAL2_CPHONELOADER_H
