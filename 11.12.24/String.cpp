#include "String.h"
#include <iostream>

void String::allocate(int size) {
    length = size;
    str = new char[length + 1];
    str[0] = '\0';
}

String::String() : String(80) {} 

String::String(int size) {
    allocate(size);
}

String::String(const char* input) {
    int size = 0;
    while (input[size] != '\0') size++;
    allocate(size);
    for (int i = 0; i < size; i++) {
        str[i] = input[i];
    }
    str[size] = '\0';
}

String::String(const String& other) {
    allocate(other.length);
    for (int i = 0; i < other.length; i++) {
        str[i] = other.str[i];
    }
    str[other.length] = '\0';
}

String::~String() {
    delete[] str;
}

void String::input() {
    std::cout << "Enter a string: ";
    std::cin.getline(str, length + 1);
}

void String::display() const {
    std::cout << "String: " << str << "\n";
}
