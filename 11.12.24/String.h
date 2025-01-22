#ifndef STRING_H
#define STRING_H

class String {
private:
    char* str;
    int length;

    void allocate(int size);

public:
    String();                               
    String(int size);                       
    String(const char* input);                  
    String(const String& other);                
    ~String();                                   

    void input();                                
    void display() const;                       
};

#endif
