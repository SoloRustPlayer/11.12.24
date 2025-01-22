#include "String.h"
#include "Array.h"
#include <iostream>

int main() {
    // Робота з класом String
    //String s1;
    //s1.input();
    //s1.display();

    //String s2("Hello, world!");
    //s2.display();

    // Робота з класом Array
    Array arr1(5, 1, 10);
    arr1.display();

    Array arr2(10, 5);
    arr2.display();

    std::cout << "Min: " << arr1.findMin() << ", Max: " << arr1.findMax() << "\n";

    arr1.sort();
    std::cout << "Sorted array: ";
    arr1.display();

    arr1.resize(7);
    std::cout << "Resized array: ";
    arr1.display();

    return 0;
}
