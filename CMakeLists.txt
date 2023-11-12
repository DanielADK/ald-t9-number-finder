cmake_minimum_required(VERSION 3.26)
project(semestral2)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -Werror -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-function -Wno-unused-private-field -Wno-unused-but-set-parameter -Wno-unused-local-typedefs -Wno-unused-value -Wno-unused-result -Wno-unused-const-variable -Wno-unused-label -Wno-unused-macros -Wno-unused-const-variable -Wno-unused-function -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-private-field -Wno-unused-but-set-parameter -Wno-unused-local-typedefs -Wno-unused-value -Wno-unused-result -Wno-unused-const-variable -Wno-unused-label -Wno-unused-macros -Wno-unused-const-variable -Wno-unused-function -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-private-field -Wno-unused-but-set-parameter -Wno-unused-local-typedefs -Wno-unused-value -Wno-unused-result -Wno-unused-const-variable -Wno-unused-label -Wno-unused-macros -Wno-unused-const-variable -Wno-unused-function -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-private-field -Wno-unused-but-set-parameter -Wno-unused-local-typedefs -Wno-unused-value -Wno-unused-result -Wno-unused-const-variable -Wno-unused-label -Wno-unused-macros -Wno-unused-const-variable -Wno-unused-function -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-private-field -Wno-unused-but-set-parameter -Wno-unused-local-typedefs -Wno-unused-value -Wno-unused-result -Wno-unused-const-variable -Wno-unused-label -Wno-unused-macros -Wno-unused-const-variable -Wno-unused-function -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-private-field -Wno-unused-but-set-parameter -Wno-unused-local-typedefs -Wno-unused-value -Wno-unused-result -Wno-unused-const-variable -Wno-unused-label -Wno-unused-macros -Wno-unused-const-variable -Wno-unused-function -Wno-unused-parameter")

add_executable(semestral2 main.cpp
        src/loaders/CPhoneLoader.h
        src/loaders/CPhoneLoader.cpp
        src/loaders/CCSVLoader.h
        src/loaders/CCSVLoader.cpp
        src/loaders/CPhoneLoaderFactory.h
        src/loaders/CPhoneLoaderFactory.cpp
        src/exception/FileNotFoundException.h
        src/exception/FileNotFoundException.cpp
        src/CContact.h
        src/CContact.cpp
        src/exception/UnknownFileTypeException.h
        src/exception/UnknownFileTypeException.cpp
        src/user_interface/CUserInterface.h
        src/user_interface/CUserInterface.cpp
        src/CContactManager.h
        src/CContactManager.cpp
        src/data_structures/CSuffixNode.h
        src/data_structures/CSuffixNode.cpp
        src/data_structures/CSuffixTree.h
        src/data_structures/CSuffixTree.cpp)
