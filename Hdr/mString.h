#pragma once
#include <cstring>
#include <iostream>

class String
{
private:
    unsigned int len;
    char* chr;

public:
    String() : len(0), chr(nullptr) { std::cout << "Defult Constructor call" << std::endl; }
    String(const char*);
    ~String();
    String(const String&);
    String& operator=(const String&);

    String operator+(const String&) const;
    String& operator+=(const String&);
    friend std::ostream& operator<<(std::ostream&, const String&);
    friend std::istream& operator>>(std::istream&, String&);
};