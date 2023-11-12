#include <iostream>
#include "src/loaders/CPhoneLoaderFactory.h"
#include "src/user_interface/CUserInterface.h"
#include "src/data_structures/CSuffixTree.h"

int main() {
    auto manager = CContactManager();
    auto ui = CUserInterface(manager);

    ui.loadContacts("../data/phones.csv");
    ui.searchBar();

    return 0;
}

