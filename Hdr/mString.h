#pragma once
#include <cstring>
#include <iostream>

class String
{
private:
    unsigned int len;
    char* chr;

public:
    String(const char*);
    ~String();
    String(const String&);
    String& operator=(const String&);

    String operator+(const String&) const;
    friend std::ostream& operator<<(std::ostream&,const String&);
};