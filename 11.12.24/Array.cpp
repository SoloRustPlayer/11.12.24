#include "Array.h"
#include <iostream>
static unsigned long seed = 123456789;
int Array::generateRandom(int min, int max) {
    seed = (1103515245 * seed + 12345) % (1 << 31);
    return min + (seed % (max - min + 1));
}
void Array::allocate(int size) {
    this->size = size;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}
Array::Array() : Array(10) {}
Array::Array(int size) {
    allocate(size);
}
Array::Array(int size, int min, int max) {
    allocate(size);
    fillRandom(min, max);
}
Array::Array(int size, int value) {
    allocate(size);
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}
Array::Array(const Array& other) {
    allocate(other.size);
    for (int i = 0; i < other.size; i++) {
        arr[i] = other.arr[i];
    }
}
Array::~Array() {
    delete[] arr;
}
void Array::display() const {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void Array::fillRandom(int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = generateRandom(min, max);
    }
}


void Array::resize(int newSize) {
    int* newArr = new int[newSize];
    for (int i = 0; i < (newSize < size ? newSize : size); i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
}


void Array::sort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int Array::findMin() const {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int Array::findMax() const {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
