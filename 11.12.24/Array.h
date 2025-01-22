#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* arr;          
    int size;         

    void allocate(int size);        
    int generateRandom(int min, int max); 

public:
    Array();                       
    Array(int size);               
    Array(int size, int min, int max); 
    Array(int size, int value);       
    Array(const Array& other);       
    ~Array();                         

    void display() const;             
    void fillRandom(int min, int max); 
    void resize(int newSize);         
    void sort();                      
    int findMin() const;              
    int findMax() const;              
};

#endif
