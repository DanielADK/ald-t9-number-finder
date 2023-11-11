//
// Created by Daniel Adámek on 11.11.23.
// daniel.adamek@tul.cz
// Copyright (c) Daniel Adámek All rights reserved.
//

#ifndef SEMESTRAL2_CUSERINTERFACE_H
#define SEMESTRAL2_CUSERINTERFACE_H

#include <iostream>
#include "../CContactManager.h"

class CUserInterface {
private:
    CContactManager& m_ContactManager;

public:
    /**
     * Constructor
     * @param manager
     */
    explicit CUserInterface(CContactManager& manager);

    /**
     * Run user interface
     */
    void run();
};


#endif //SEMESTRAL2_CUSERINTERFACE_H
