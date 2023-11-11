#include <iostream>
#include "src/loaders/CPhoneLoaderFactory.h"

int main() {
    std::vector<CContact> contacts;
    try {
        std::string path = "../data/phones.csv";
        auto loader = CPhoneLoaderFactory::createLoader(path);
        loader->load();
        contacts = loader->export_contacts();

    } catch (const UnknownFileTypeException& e) {
        std::cerr << "Error: " <<  e.what() << std::endl;
    }
    std::cout << contacts.size() << std::endl;
    return 0;
}
