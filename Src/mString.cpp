#include "mString.h"
using namespace std;

String::String(const char* c) : len(strlen(c)), chr(new char[len + 1])
{
    strcpy_s(chr, len + 1, c);
    cout << "Constructor call" << endl;
}
String::~String()
{
    delete[] chr;
    cout << "Destructor call" << endl;
}
String::String(const String& cpy) : len(cpy.len), chr(new char[len + 1])
{
    strcpy_s(chr, len + 1, cpy.chr);
    cout << "Copy Constructor call" << endl;
}
String& String::operator=(const String& acpy)
{
    if (this != &acpy)
    {
        delete[] chr;
        len = acpy.len;
        chr = new char[len + 1];
        strcpy_s(chr, len + 1, acpy.chr);
    }
    cout << "Assinment operator call" << endl;
    return *this;
}

String String::operator+(const String& str2) const
{
    unsigned int newLen = len + str2.len;
    char* temp = new char[newLen + 1];

    strcpy_s(temp, newLen + 1, chr);
    strcat_s(temp, newLen + 1, str2.chr);

    String result(temp);
    delete[] temp;
    cout << "+ operator call" << endl;
    return result;
}
String& String::operator+=(const String& str2)
{
    unsigned int newLen = len + str2.len;
    char* temp = new char[newLen + 1];

    strcpy_s(temp, newLen + 1, chr);
    strcat_s(temp, newLen + 1, str2.chr);

    delete[] chr;
    chr = temp;
    len = newLen;
    cout << "+= operator call" << endl;
    return *this;
}
std::ostream& operator<<(std::ostream& out,const String& str)
{
    cout << "<< operator call" << endl;
    if (str.chr) std::cout << str.chr;
    return out;
}