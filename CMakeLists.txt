cmake_minimum_required(VERSION 3.26)
project(semestral2)

set(CMAKE_CXX_STANDARD 17)

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
        src/exception/UnknownFileTypeException.cpp)
